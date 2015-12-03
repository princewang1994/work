#!/usr/bin/python


import sys
import MySQLdb

conn=MySQLdb.connect('localhost','root','wyj123','aminer')

cur=conn.cursor();

y1=int(sys.argv[1])
y2=int(sys.argv[2])

l=cur.execute(' select source_index, dest_index \
		from cite inner join paper as p on source_index=p.id \
			inner join paper as q on dest_index=q.id\
		where (p.year between %d and %d ) and (q.year between %d and %d)' % (y1,y2,y1,y2))

f=open('data/year%d_%d.txt' % (y1,y2),'w')

print l,'edges'

f.write('Source,Target')

while True:
	res=cur.fetchone()
	if res==None:
		break

	f.write(str(res[0]))
	f.write(',')
	f.write(str(res[1]))
	f.write('\n')


