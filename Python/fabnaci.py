#!/usr/bin/python

def fab(t):
	f=[0,1,1]
	i=2
	while(1):
		f.append(f[i]+f[i-1])
		if f[i+1]>t:
			return f[i+1]
		i+=1
		

t=input('t=')

print fab(t)

