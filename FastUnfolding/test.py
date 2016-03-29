#!/usr/bin/env python3

import math
import unittest
from pylouvain import PyLouvain

class PylouvainTest(unittest.TestCase):
   

    def test_test(self):
        pyl = PyLouvain.from_file("data/year1990.txt")
        partition, q = pyl.apply_method()
        return partition

    def test_citations(self):
        pyl = PyLouvain.from_file("data/hep-th-citations")
        partition, q = pyl.apply_method()

    def test_karate_club(self):
        pyl = PyLouvain.from_file("data/karate.txt")
        partition, q = pyl.apply_method()
        q_ = q * 10000
        self.assertEqual(4, len(partition))
        self.assertEqual(4298, math.floor(q_))
        self.assertEqual(4299, math.ceil(q_))

    def test_lesmis(self):
        pyl = PyLouvain.from_gml_file("data/lesmis.gml")
        partition, q = pyl.apply_method()

    def test_polbooks(self):
        pyl = PyLouvain.from_gml_file("data/polbooks.gml")
        partition, q = pyl.apply_method()

def run():
	
	f=open('node.csv','w')
	#p=PylouvainTest.test_karate_club(PylouvainTest)
	p=PylouvainTest.test_test(PylouvainTest)
	f.write('Id,Modularity Class')
#	src=open('cluster.txt')
#	nodes=[]
#	for line in src:
#		#print('line',line)
#		#print(line.split()[0])
#		node1=int(line.split()[0])
#		node2=int(line.split()[1])
#		nodes.append(node1)
#		nodes.append(node2)
#	nodes=list(set(sorted(nodes)))
#
#	#print('node',nodes)
#	index=0
#	#print('p',p)
	for comm in p:
		print(comm) 
#		for node in comm:
#			#print(node)
#			f.write(str(nodes[node]))
#			f.write(',')
#			f.write(str(index)+'\n')	
#		index+=1

run()

