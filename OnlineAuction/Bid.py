import math

#number of servers 
S=5

#number of resource 

rName=['RAM','CPU','DISK']

R=len(rName)

#capacity
C={'RAM':[100,100,100,100,100],'CPU':[4.0,4.0,4.0,4.0,4.0],'DISK':[600,600,600,600,600]}

#number of bids
I=10

#run time slot
T=3600

#allocated resource
y={}

#marginal payment
p={}

	

				
'''cost parameter'''
def beta(r,s):
	if r=='CPU':
		return 1.5 
	if r=='RAM':
		return 0.75
	if r=='DISK':
		return 0.65

'''predict delta'''
def delta(r,s):
	return max(2,(1+beta(r,s))**(1/beta(r,s)))

'''
	theta
'''
def theta(r,s):
	t1=float(delta(r,s))/C[r][s]*beta(r,s)
	t2=float(delta(r,s))/C[r][s]/(delta(r,s)-1)*math.log(U(r)/h(r,s)/(1+beta(r,s)/C[r][s]**(beta(r,s))),math.e)
	return max(t1,t1)
	
def U(r):
	return 1.0
def L(r):
	return 1.0
def h(r,s):
	if r=='CPU':
		return 0.08
	if r=='RAM':
		return 0.002
	if r=='DISK':
		return 0.0001
''' server cost '''		
def f(r,s,x):
	return h(r,s)*(x**(1+beta(r,s)))

def _f(r,s,x):

#	print '_f=',h(r,s),(1+beta(r,s)),(x**beta(r,s))
	return h(r,s)*(1+beta(r,s))*(x**beta(r,s))
	

class Bid:
	
	def __init__(self,t,t1,t2,d,b):
		self.t=t
		self.t1=t1
		self.t2=t2
		self.d=d
		self.b=b
	'''
		the payment of bid i
	'''
	def _p(self,s,prnt=False):

		p_tot=0.0
		for r in rName:
			r_cost=0.0
			for t in xrange(self.t1,self.t2+1):
				r_cost+=self.d[r][t-self.t1]*p[r][s][t]
		#	print '%s_cost=%f' % (r,r_cost)
			p_tot+=r_cost
			
			if prnt:
				print 'p[%s]=%d' % (r,r_cost)
		print '_p[%d]=' % s, p_tot 
		return p_tot
		
	'''
		utility of bid i
	'''
	def u(self,s):
		return self.b-self._p(s)
	
	def server_sel(self): 

		_min=9999999
		#max utility server 
		si=0
		for s in xrange(S):
			_p=self._p(s)
			if _p < _min:
				_min=_p
				si=s

		#print '_min',_min
		self._p(si,prnt=True)
		#return the max utility and server 
		print 'ui=',self.b-_min
		return (self.b-_min , si)

	def update_p(self,r,s):

		#print delta(r,s)
		for t in xrange(self.t1,self.t2+1):	

		#	print "aaaaa",y[r][s][t]*delta(r,s)

			if y[r][s][t]*delta(r,s) <= C[r][s]:
				#print '...',y[r][s][t],delta(r,s) 
				p[r][s][t]=_f(r,s,y[r][s][t]*delta(r,s))
			else:
				p[r][s][t]=_f(r,s,C[r][s])*math.exp(theta(r,s)*(y[r][s][t]-C[r][s]/delta(r,s)))
		#		print '>crs p[%s][%d][%d]' % (r,s,t) , p[r][s][t]
		#print p[r][s]
