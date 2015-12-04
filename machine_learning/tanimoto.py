#!/usr/bin/python
import re
from get_ee import *
def tanimoto(w1,w2):
		
	shr=0

	for word in w1:
		for other in w2:
			if len(word)<=2 or len(other)<=2:
				if(word==other):
					shr+=1
			else:
				if(len(word)<len(other)):
					if(re.match('\w*'+word+'\w*',other)):
						#print 'match',word , other
						shr+=1
				else:
					if(re.match('\w*'+other+'\w*',word)):
					#	print 'match',word, other
						shr+=1
 	#print 'shr=',shr	
	s=len(w1)+len(w2)-shr
	#print 's=',s
	return 1.0-(float(shr)/s)

