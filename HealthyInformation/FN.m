%sort type
Type=classification(label,3);

%var 
s={[];[];[]};

%sum of mutual distance
m=[mean(gene(Type{1},:));mean(gene(Type{2},:));mean(gene(Type{3},:))];

%以每个基因作为分类的三个类型的中点差值
dis=(m(1,:)-m(3,:)).^2;

for i=1:2:3
    s{i}=var(gene(Type{i},:));
end

sum_s=(s{1}+s{3})./dis;

[ss,index]=sort(sum_s);

x=index(1);
z=index(2);
y=index(3);

%gplot3(gene,Type,x,y,z);

plot3(gene(Type{1},x),gene(Type{1},y),gene(Type{1},z),'.');grid
hold on

plot3(gene(Type{3},x),gene(Type{3},y),gene(Type{3},z),'g.');
%g(index(1:50))=1;



%cut_gene=gene(:,index(1:180));

%elite=GA(cut_gene,Type);