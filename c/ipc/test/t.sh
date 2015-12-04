t=0
#inet test
echo "inet 1k" >> inet.t
while [ $t -lt 100  ]
do
	./inet /home/prince/Desktop/work/c/ipc/in/1k.in >> inet.t
	t=`expr $t + 1`;
done
t=0;
echo "inet 1m" >> inet.t
while [ $t -lt 100  ]
do
	./inet /home/prince/Desktop/work/c/ipc/in/1m.in >> inet.t
	t=`expr $t + 1`;
done
t=0;
echo "inet 10m" >> inet.t
while [ $t -lt 100  ]
do
	./inet /home/prince/Desktop/work/c/ipc/in/10m.in >> inet.t
	t=`expr $t + 1`;
done
