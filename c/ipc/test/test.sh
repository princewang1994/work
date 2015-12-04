t=0;

#pipe test
echo "pipe 1k" >> pipe.t
while [ $t -lt 100  ]
do
	./pipe /home/prince/Desktop/work/c/ipc/in/1k.in >> pipe.t
	t=`expr $t + 1`;
done

t=0;
echo "pipe 1m" >> pipe.t
while [ $t -lt 100  ]
do
	./pipe /home/prince/Desktop/work/c/ipc/in/1m.in >> pipe.t
	t=`expr $t + 1`;
done
t=0;

echo "pipe 10m" >> pipe.t
while [ $t -lt 100  ]
do
	./pipe /home/prince/Desktop/work/c/ipc/in/10m.in >> pipe.t
	t=`expr $t + 1`;
done






t=0;

#fifo test
echo "fifo 1k" >> fifo.t
while [ $t -lt 100  ]
do
	./fifo /home/prince/Desktop/work/c/ipc/in/1k.in >> fifo.t
	t=`expr $t + 1`;
done
t=0;

echo "fifo 1m" >> fifo.t
while [ $t -lt 100  ]
do
	./fifo /home/prince/Desktop/work/c/ipc/in/1m.in >> fifo.t
	t=`expr $t + 1`;
done
t=0;


echo "fifo 10m" >> fifo.t
while [ $t -lt 100  ]
do
	./fifo /home/prince/Desktop/work/c/ipc/in/10m.in >> fifo.t
	t=`expr $t + 1`;
done

t=0;
#sock test
echo "sock 1k" >> sock.t
while [ $t -lt 100  ]
do
	./sock /home/prince/Desktop/work/c/ipc/in/1k.in >> sock.t
	t=`expr $t + 1`;
done
t=0;
echo "sock 1m" >> sock.t
while [ $t -lt 100  ]
do
	./sock /home/prince/Desktop/work/c/ipc/in/1m.in >> sock.t
	t=`expr $t + 1`;
done
t=0;
echo "sock 10m" >> sock.t
while [ $t -lt 100  ]
do
	./sock /home/prince/Desktop/work/c/ipc/in/10m.in >> sock.t
	t=`expr $t + 1`;
done
t=0;


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
