clc
x1=[1,1,1,1.5,2,2,3,4,5,6,6.5,6.5,7,8,8];
x2=[1,2,3.5,1.5,3,1,2.5,0.5,4,4,3.5,5,4,4,2.5];
y=[0,0,0,0,0,0,0,0,1,1,1,1,1,1,1];

ex=0.0001;
theta0=rand();
theta1=rand();
theta2=rand();
alpha=0.1;
i=1;
s=0;
while(1)
    t0=theta0;
    t1=theta1;
    t2=theta2;
    h=1/(1+exp(-theta2*x2(i)-theta1*x1(i)-theta0));
    
    theta0=theta0+alpha*(y(i)-h)
    theta1=theta1+alpha*(y(i)-h)*x1(i)
    theta2=theta2+alpha*(y(i)-h)*x2(i)
   
    d0=abs(t0-theta0);
    d1=abs(t1-theta1);
    d2=abs(t2-theta2);
    
    if(d0<ex && d1<ex && d2<ex)
        break;
    end  
    
    i=mod(i+1,length(x1))+1;
    s=s+1;
end
s
xx=linspace(0,10);
yy=(-theta0-theta1*xx)/theta2;

plot(x1(1:8),x2(1:8),'r*')
hold on
plot(x1(9:15),x2(9:15),'b*')
plot(xx,yy);
