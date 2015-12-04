#!/usr/bin/python
import re
def generateData(f):
	word={}
	count=0
	for line in open(f):
	
		if count >=2000 :
			break	
		i=0
		while(line[i]!=' '):
			i+=1
		first=i
		while(line[i]==' '):
			i+=1
		word[line[0:first]]=line[i:]
	
		count+=1
	return word

def analyze():

	word=generateData('ee_dic.txt')
	wordset={}
	wordCount={}
	
	r=re.compile(r'[^A-Z^a-z]')

	for w in word:
		wordset[w]=r.split(word[w])
		for ww in wordset[w] :
			wordCount.setdefault(ww,0)
			wordCount[ww]+=1
	return wordCount	


def pearson(w1,w2):
	
	s1=sum([v[0] for (k,v) in w1])
	s2=sum([v[1] for (k,v) in si.items()])
	
	sum1Sq=sum([v[0]**2 for (k,v) in si.items()])
	sum2Sq=sum([v[1]**2 for (k,v) in si.items()])

	
	pSum=sum([v[0]*v[1] for (k,v) in si.items()])

	num=pSum-(s1*s2/n)

	den=sqrt((sum1Sq-pow(s1,2)/n)*(sum2Sq-pow(s2,2)/n))

	if den==0 : 
		return 0

	return num/den
	
