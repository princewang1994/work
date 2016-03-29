%load data
gene=load('data.txt');
gene=gene';

%person: id:gene:class
person=load('_metadata_test.txt');

%gene=normalization(gene);

person=person(:,3);

for i = 1: size(gene,1)
    if person(i)==3
        person(i)=1;
    end
end

%sort type
Type=classification(person,2);

%var 
s={[];[];[]};

%sum of mutual distance
m=[mean(gene(Type{1},:));mean(gene(Type{2},:));];

%以每个基因作为分类的三个类型的中点差值
dis=(m(1,:)-m(2,:)).^2;


s1=var(gene(Type{1},:));
s2=var(gene(Type{2},:));


sum_s=(s1+s2)./dis;

[ss,index]=sort(sum_s);

x=index(1);
z=index(2);
y=index(3);

plot3(gene(Type{1},x),gene(Type{1},y),gene(Type{1},z),'b.');grid
hold on
plot3(gene(Type{2},x),gene(Type{2},y),gene(Type{2},z),'r.');
