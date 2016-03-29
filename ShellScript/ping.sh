#!/bin/bash

x=$1
end=$2
fpath=$3

#check addr1 and addr2 are number char
function checkString()
{
	i=1
	str=$1
	len=${#str}
	while [ $i -lt $len  ]
	do
		sub=`expr substr $1 $i 1`
		if [ $sub  \< 0 ] || [ $sub \> 9  ] #check wether the string is valid
		then
			echo "$str: invalid IP Address"
			exit 1 
		fi
		i=`expr $i + 1`
	done
	if [ `expr $str - 255` -gt 0  ]
	then
		echo "$str: greater then 255"
		exit 1
	fi
	echo "$str: valid IP Address"	
}

#check addr1<addr2
function checkNumberSeq()
{
	if [ $1 \> $2  ]
	then
		echo "Address1 can not greater then Address2"
		exit 1
	fi
}

function checkFilePath()
{
	if ( test -d $1 )#check path exist 
	then
		echo "$1 is dictionary"		
	else
		echo "$1 is not dictionary"
		exit 1
	fi
}

function tarFile()
{
	fileName=${fpath##*/}.tar.gz
	tar -zcvf $fileName $1  		
}
function sendFile()
{
	scp $fileName $1:$fileName
	if [ $? -eq 0  ]
	then 
		echo 'send successfully'
	else
		echo 'send failed'
	fi
}
checkString $x
checkString $end
checkNumberSeq $x $end
checkFilePath $fpath 
#set multi ip adress 
sudo ifconfig th0:1 192.168.0.3 net mask 255.255.255.0
sudo ifconfig th0:3 192.168.0.4 net mask 255.255.255.0

while [ $x -lt `expr $end + 1`  ]
do
	IP="192.168.0.$x"
	echo "ping $IP,please wait"

	LOSS=$( ping $IP -c 5 | tail -n 2 | cut -d ' ' -f 6 | cut -d '%' -f 1 ) 
	#get the loss rate of package	
	if [ $LOSS -eq 100 ]
	then 
		echo "$IP can not connect"
	else
		echo "$IP connected "
		echo "sending file to 192.168.0.$x"
		tarFile $fpath
		sendFile 192.168.0.$x
	fi
	x=`expr $x + 1`
done


exit 0
