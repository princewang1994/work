#!/usr/bin/python
import math
import random

def signoid(x):
	return 1.0/(1+math.exp(-x))

def train_data(num):

	res=[]

	for i in range(num):
		x=random.randint(0,100000)
		x=x%314
		x=float(x)/100
		res.append((x,math.sin(x)))
	return res	



def create_net(layer=[2,1]):

	

create_net()
print weight_mtx
	


