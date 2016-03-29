#!/usr/bin/python

import random
from tanimoto import *
import math
import copy
def k_means(ee,k):
		

	center=[]
	
	cat=[]

	for i in range(k):
		#random group center
		c=random.randint(0,len(ee)-1)		
		word=ee.keys()[c]
		center.append(ee[word])
		cat.append([])
		#print center		
	#k-means
	while 1:
		pre=copy.deepcopy(center)
		for word in ee:
			#find min distance in centers
			m=100
			d=0
			for i in range(k):
				t=tanimoto(ee[word],center[i])
				if t<m:
					m=t
					d=i
			if word in ['sea','ocean','ice','water']:
				print center[d]
			cat[d].append(word)
		
		for i in range(k):
			for w in cat[i]:
				center[i]=list(set(ee[w]+center[i]))
		print [len(c) for c in center]
		flag=True
		for i in range(k):
			if not set(pre[i])==set(center[i]) :
				flag=False
		if flag:
			break

		for i in range(k):
			 cat[i]=[]

		print '-------'
	return cat	
			
			
cat=k_means(ee,20)

for c in cat :
	print c 
					
