#!/usr/bin/python

#number of servers 
S=5

#number of resource 

rName=['RAM','CPU','DISK']

R=len(rName)

#capacity
C={'RAM':[100,100,100,100,100],'CPU':[100,100,100,100,100],'DISK':[100,100,100,100,100]}


#number of bids
I=10

#parameter of server cost
beta={'RAM':[2,2,2,2,2],'CPU':[2,2,2,2,2],'DISK':[2,2,2,2,2]} 
h={'RAM':[2,2,2,2,2],'CPU':[2,2,2,2,2],'DISK':[2,2,2,2,2]} 



class Bid
	
	def __init__(self,t1,t2,d,b):
		self.t1=t1
		self.t2=t2
		self.d=d
		self.b=b
	'''
		the payment of bid i
	'''
	def _p(self,s):
		p_tot=0
		for t in xrange(t1,t2+1):
			for r in rName:
				p_tot+=self.d(r,t)*p(r,s)
		return p_tot
		
	'''
		utility of bid i
	'''
	def u(self):
		return self.b-self._p()
	
	def server_sel(self): 
		_max=-1
		#max utility server 
		si=0
		for s in xrange(S):
			u=self.u()
			if u>_max
				_max=u
				si=s

		#return the max utility and server 
		return (_max , si)
				
		
''' server cost '''		
def f(r,s,x):
	return h[r][s]*(x**(1+beta[r][s]))

''' marginal payment '''
def p(r,s):
	pass
	
'''CORE function'''
def CORE(bids):

	for bi in bids:
		x=[]
		for i in xrange(S):
		       x.append(0)

		(ui,si)=bi.server_sel()

		#if utility is optimal
		if ui > 0 :

			_p=bi._p()

			#serve the bid 
			x[si]=1

		#else reject it 
			
	return (x,_p)


''' __main__'''
def execute_pd1():
	
	bids=[]
	
	U_tot=0
	P_tot=0
	
	
	
	
	


