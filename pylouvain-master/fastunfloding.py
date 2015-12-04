#!/usr/bin/python

edge=[]
nb={}
comm=[]
father=[]
#number of edges
m=0

def union():
	
def init():
	global edge
	global comm
	global	m 
	for line in open('test'):
		num=line.split(' ')
		x=int(num[0])
		y=int(num[1])
		edge.append([x,y])
		nb.setdefault(x,[])
		nb[x].append(y)
	
	m=len(edge)/2
	comm=[ set([x]) for x in nb.keys() ]
	father=range(m)
	
def delt_Q(c,i):
	
	kin=len([(x,y) for (x,y) in edge if (x == i) and (y in c)])
	tot=len([(x,y) for (x,y) in edge if (x in c) ])
	ki=len([(x,y) for (x,y) in edge if (x == i)])

#	print kin,tot,ki
	return m*kin-tot*ki
def main():
	
	init()
	
	for s in comm:
		if len(s)==1:
			for 
				 		
	
	
	
	

main()
