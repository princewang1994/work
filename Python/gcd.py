#!/usr/bin/python

def gcd(a, b):
	if b == 0:
		return a
	else:
		return gcd( b,a%b )

def gcc(a,b):
	return a*b/gcd(a,b)

def f(a,b):
	return [gcd(a,b),gcc(a,b)]
	
a=10
b=8

print f(a,b) 


