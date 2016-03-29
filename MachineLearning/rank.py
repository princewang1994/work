#!/usr/bin/python




from comment import comment

from math import sqrt

def get_si(prefs,p1,p2):
	
	si={}

	for good in  prefs[p1]:
		if good in prefs[p2]:
			si[good]=[prefs[p1][good],prefs[p2][good]]
	return si	

def sim_dist(prefs,p1,p2):
	
	si=get_si(prefs,p1,p2)

	if len(si) == 0 :

		return 0

	s=sum([pow((v[0]-v[1]),2) for (k,v) in si.items()]) 

	return 1/(1+sqrt(s)) 		



def sim_pearson(prefs,p1,p2):

	si=get_si(prefs,p1,p2)
	
	if len(si)==0 :
		return 1
	n=len(si)

	s1=sum([v[0] for (k,v) in si.items()])
	s2=sum([v[1] for (k,v) in si.items()])
	
	sum1Sq=sum([v[0]**2 for (k,v) in si.items()])
	sum2Sq=sum([v[1]**2 for (k,v) in si.items()])

	
	pSum=sum([v[0]*v[1] for (k,v) in si.items()])

	num=pSum-(s1*s2/n)

	den=sqrt((sum1Sq-pow(s1,2)/n)*(sum2Sq-pow(s2,2)/n))

	if den==0 : 
		return 0

	return num/den

def inverse(comment):
	
	res={}

	for person_name  in comment:
		for good_name in comment[person_name]:
	 		res.setdefault(good_name,{})
			#
			res[good_name][person_name] = comment[person_name][good_name]
	return res

	 
def topRank(comment,p1,n=5,sim_method=sim_pearson):

	# find the top mark during all scores

	return sorted([(sim_method(comment,p1,p_name),p_name) for p_name in comment if p_name != p1],reverse=True)[0:n]








#print topRank(comment,'wangyanjie')
#recommand some goods for p1
def recommand_by_user(comment,p1,sim=sim_pearson):
	
	rank=topRank(comment,p1)

	goods_score={}	
	
	person_score={}
	
	for (score,user) in rank:

		if score<= 0:
			continue
		if user != p1 :
			for good in comment[user]:
				goods_score.setdefault(good,0)
				goods_score[good]+=comment[user][good] * score
				person_score.setdefault(good,0)
				person_score[good]+=score	

	return [(g,goods_score[g]/person_score[g]) for g in goods_score if g not in comment[p1] ]

print recommand_by_user(comment,'wangyanjie')
		
