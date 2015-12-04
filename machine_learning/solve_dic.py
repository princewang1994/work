#!/usr/bin/python

import re

r=re.compile(r"\W+")

ee={}

for line in open('ee_dic.txt'):
	
	data=r.split(line)
	
	ee[data[0]]=data[1:]

for word in ee:
	
	if ee[word][-1]=='':
		ee[word].remove(ee[word][-1])

f=open('new_dic','w')

for word in sorted(ee):
	
	f.write(word+" ")
	for des in ee[word]:
		f.write(des+" ")

	f.write("\n")	
