#!/usr/bin/python

import pkg.other as other
import copy


print(other.add(1,2))

a=[1,2,3,['a','b','c']]

b=a

c=copy.copy(a)

d=copy.deepcopy(a)



b.append('d')


print(a,b)

c[3].append(3)

print a,b

d[3].append('d3')

print a,b,d
