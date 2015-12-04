t=0;

while [ $t -lt 100  ]
do
	./a.out /home/prince/Desktop/work/c/ipc/in/1m.in >> time.out
	t=`expr $t + 1`;
done
