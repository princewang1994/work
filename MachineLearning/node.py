#!/usr/bin/python

from math import log

class node:

	def __init__ (self,data_set,respect,judge,layer=0):
				
		self.data_set=data_set
		self.judge=judge
		self.layer=layer
		self.ts=None
		self.fs=None
		self.construct(respect)
		self.respect=respect
		self.e=self.entropy(data_set,respect)


	def show(self):

		print self.data_set
		if self.ts != None:
			self.ts.show()
		if self.fs != None:
			self.fs.show()
		
	def construct(self,respect):
		
		if self.entropy(self.data_set,respect)<0.2:
			return None
		if self.layer==len(self.judge)-1:
			return None
		s1=[x for x in self.data_set if self.judge[self.layer](x)]

		
		s2=[x for x in self.data_set if not self.judge[self.layer](x)]

		self.ts=node(s1,respect,self.judge,self.layer+1)
		self.fs=node(s2,respect,self.judge,self.layer+1)
		
	def entropy(self,data_set,respect):

		log2=lambda x:log(x)/log(2)

		p1=len([x for x in data_set if respect(x)])
		
		
		p2=len(data_set)-p1
		
		p1=float(p1)/len(data_set)

		p2=float(p2)/len(data_set)	
		
		if (abs(p1)<0.0001) | (abs(p2)<0.0001):
			return 1.0		
		print p1,p2
		return (-1)*(p1*log2(p1)+p2*log2(p2))



f=lambda x:x%2==0

g=lambda x:x<=5

k=lambda x:x>2

r=lambda x:x%3==0

s=set([1,2,3,4,5,6,7,8,9,10])
	
n=node(s,g,[f,g,k])

n.show()
		
	
