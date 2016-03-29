#!/usr/bin/python

user={}
for line in open('uu.user'):

	data=line.split('|')

	user[data[0]]=data[1:]

f=open("insert.sql","w")

f.write("insert into user values\n")

for id in user:
	f.write("("+id+"\t");
	f.write(','+user[id][0]+"\t");
	f.write(',"'+user[id][1]+'"\t');
	f.write(',"'+user[id][2]+'"\t');
	f.write(',"'+user[id][3][0:-1]+'"),\n');
f.close()
