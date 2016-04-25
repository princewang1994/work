#!/usr/bin/python

lst=[1,2,4,53,2,1,3,5,3,1]

def f(lst):
	m=min(lst)
	index=[ i for i in range(len(lst)) if lst[i]==m ]
	m=[m]
	return tuple(m)+tuple(index)
		
print f(lst)
