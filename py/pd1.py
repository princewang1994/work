#!/usr/bin/python
import math

from getdata import get_data
from getdata import _get_data
from Bid import *


	
	
'''CORE function'''
def CORE(bid):

	global S
	x=[]
	for i in xrange(S):
	       x.append(0)


	
	print 'bid:'
	print 't1=',bid.t1
	print 't2=',bid.t2
	print 'bi=',bid.b
#	print 'd=',bid.d
	
	(ui,si)=bid.server_sel()

	p_hat=0.0

	#if utility is optimal
	if ui > 0 :

		p_hat=bid._p(si)

		#serve the bid 
		x[si]=1
		
		
		for r in rName:
			for t in xrange(bid.t1,bid.t2+1):
				#allocate resource
				y[r][si][t]+=bid.d[r][t-bid.t1]
		#update prs
		for r in rName:
			bid.update_p(r,si)
#		print p
	
	
	#else reject it 
		
	return (x,p_hat)


def init():

	global rName
	global y
	global p

	#initialize p and y
	for r in rName:
		y.setdefault(r,[])
		p.setdefault(r,[])
		for s in xrange(S):
			p[r].append([])	
			y[r].append([])
			for t in xrange(T):
				p[r][s].append(0)	
				y[r][s].append(0)

#	print y,p

	global bids
	bids=get_data()

#	for bid in bids:
#		print bid.t1
#		print bid.t2
#		print bid.d
#		print bid.b

				
''' __main__'''
def execute_pd1():
	
	init()
 
	#social welfare
	sw_tot=0
	for bid in bids:
		(x,_p)=CORE(bid)	
		sw_tot+=_p
		print x,_p
		print '------------------------------------'

	print 'welfare total=',sw_tot
	

	for s in xrange(S):
		f=open('s%d.mtx' % s,'w')
		for r in rName:
			for t in xrange(T):
				f.write(str(y[r][s][t])+" ")
			f.write("\n")

		f.close()
		 
	
	
execute_pd1()	
	
	
	
	


