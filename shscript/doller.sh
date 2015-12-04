#!/bin/bash

i=1

while [ $i -lt 100 ]
do
	echo $i
	i=`expr  $i + 1`
done
#function f()
#{	
#	echo "f($1,$2)"
#}
#
#if ( test -d  t.sh )
#then
#	echo 'dictionary'
#else
#	echo 'file'
#fi
#
#f a b
#echo ${HOME}
#echo $(ps)
#echo 'my home is'${HOME}
#url=http://baidu.com:80/index.jsp
#echo ${url%%/*}
