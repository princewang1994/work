#!/usr/bin/python
import MySQLdb
a=0
paper="/home/prince/download/AMiner-Paper.txt"

cite_sql='insert into cite values(%d, %d)'

#paper="/home/prince/Desktop/work/AMiner/data"
#coauthor="/home/prince/Downloads/AMiner-Coauthor.txt"

sql="insert into paper(id,title,author,year,abstract) values (%d,'%s','%s',%d,'%s')"
sql2="insert into paper(id,title,author,year,abstract) values (%d,'%s','%s',%d,null)"
global param
param=[]

def title(line):
	global param
	#print 'title',line[3:]
	param.append(line[3:])
	
def year(line):
	global param
	#print 'year',line[3:]
	try:
	
		param.append(int(line[3:]))
	
	except Exception , e:
		param.append(0)
def author(line):
	global param
	param.append(line[3:])

	
def index(line):
	global param
	#print param
	if param != []:
		try:	
			if param[0]%10000 == 0:
				print param[0],'paper has finished'
			if len(param)==5:
				cur.execute(sql % tuple(param))
			else :
				cur.execute(sql2 % tuple(param))
		except Exception ,e :
			print 'exception',param,e;

	param=[]
#	print 'index=',line[7:]	
	param.append(long(line[7:]))
	
def cite(line):
	global param
	try:	
		#print  param[0],long(line[3:])
		cur.execute(cite_sql % (param[0],long(line[3:])))
	except Exception ,e :
			print 'exception',cite_sql % (param[0],long(line[3:])),e
	
#	print 'cite'

def abstract(line):
	global param
	param.append(line[3:])

def default(line):
	pass


global conn

conn=MySQLdb.connect('localhost','root','wyj123','aminer')

cur=conn.cursor()

a=0
for line in open(paper):

	if line=='\n':
		continue  
#	print line;
	t=line[1]
	
	dic={'i':index,'*':title,'t':year,'@':author,'o':default,'c':default,'%':cite,'!':abstract};
		
	dic[t](line[:-1].replace("'","`").replace('"','``').replace(';',':').replace('\\','/'))	

#	if a>=1000 :
#		break

conn.commit()
cur.close()
conn.close()
