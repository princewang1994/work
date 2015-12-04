#!/usr/bin/python

import re
import random	
def get_ee(f):
	# get dictionary
	ee={}
	r=re.compile(r'\W+')
	for line in open(f):
		data=r.split(line)
		ee[data[0]]=list(set(data[:]))	
		for word in ee[data[0]]:
			if word == '':
				ee[data[0]].remove('')
	
	res={}
	words=[]
	for line in open('word.txt'):
		words.append(line[:-1])
	for i in range(len(words)):
		k=random.randint(0,len(words)-1)
		temp=words[i]
		words[i]=words[k]
		words[k]=temp	
	for i in range(200):
		res[words[i]]=ee[words[i]]
	res['water']=ee['water']
	res['sea']=ee['sea']
	res['ocean']=ee['ocean']
	res['ice']=ee['ice']
	return res

ee=get_ee('new_dic')
