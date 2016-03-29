#!/bin/bash

path=$1
line=1

n=$(ls -a $path | wc -l)
#echo $n
	
while [ $line -le $n ];
do
	name=$(ls -a $path | head -n $line | tail -n 1)
	#echo name $name
	
	if [ -f "$path/$name" ]
	then
		echo -e "$name \t $(cat $path/$name | wc -c)"
	fi
	
	
	line=`expr $line + 1`
done
