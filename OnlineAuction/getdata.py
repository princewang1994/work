#!/usr/bin/python

import random
from Bid import *

def get_data():
	global T 

	NUM=1000
	
	C={'RAM':100,'CPU':4.0,'DISK':600}
	
	mp={'RAM':0.013,'CPU':0.03,'DISK':6e-4}
	
	random.seed(10)
	
	bids=[]
	
	for i in xrange(NUM):
	
		t=random.randint(0,T)
		if t >= T:
			t/=2
	#	print 't=',t
	
		t1=t+random.randint(0,T/10)
		if t1 >= T:
			t1/=2
	
	#	print 't1=',t1
		t2=t1+random.randint(0,T)
		if t2 >= T:
			t2=T-1
	#	print 't2=',t2
	
		d={'RAM':[],'CPU':[],'DISK':[]}
	
		b=0
		for rName in d:
			for t_slot in xrange(t2-t1+1):
				d[rName].append(random.uniform(0,C[rName]/10))
			b+=sum(d[rName])*mp[rName]
	
		b=b*random.uniform(0.9,10)
	
	#	print 'd=',d
				
	#	print 'b=',b
		
		bid=Bid(t,t1,t2,d,b)
		bids.append(bid)

	return bids	
def _get_data():
	global T 

	NUM=1000
	
	C={'RAM':100,'CPU':4.0,'DISK':600}
	
	mp={'RAM':0.013,'CPU':0.03,'DISK':6e-4}
	
	random.seed(10)
	
	bids=[]
			
	d={'RAM':[],'CPU':[],'DISK':[]}

	d['CPU']=[0.2,0.1,0.2,0.3,0.4]
	d['RAM']=[1,2,2,3,1]
	d['DISK']=[10,10,15,12,10]

	b=Bid(1,3,7,d,0.495)
	bids.append(b)

	d={'RAM':[],'CPU':[],'DISK':[]}

	d['CPU']=[0.1,0.2,0.2,0.3]
	d['RAM']=[2,2,1,2]
	d['DISK']=[15,5,5,20]

	b=Bid(1,5,8,d,0.142)
	bids.append(b)
	return bids	
