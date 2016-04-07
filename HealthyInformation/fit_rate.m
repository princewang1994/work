function [ fr ] = fit_rate( data,class,gene_bin)
%calculate fit rate
%data: primal data
%class: claassification id cell
%nclass: number of classes
%gene: gene sequence

%return fr : fitting rate


    %gene is list
    gene=zeros(1,sum(gene_bin));
    k=1;
    for i = 1:length(gene_bin)
        if(gene_bin(i)==1)
            gene(k)=i;
            k=k+1;
        end
    end    
    
    nclass=length(class);
    
    nfeature=length(gene);

    s=zeros(1,nclass);
    
    %gene data
    p_data=data(:,gene);    
    
    cls_m=zeros(nclass,nfeature);
    
    %mean of gross data
    %m=mean(p_data);    
    
    for i = 1:nclass
        s(i)=size(class{i},2);
        cls_m(i,:)=mean(p_data(class{i},:),1);
    end
    
    Sb=sum((cls_m(1,:)-cls_m(3,:)).^2);
    
    
    
    %Sb=Sb/nclass;
    
    %cls_m
    %Sb=sum(sum((cls_m-repmat(m,nclass,1)).^2))/nclass;
    
    Sw=0;
    
    n1=length(class{1});
    x1=p_data(class{1},:);
    mm1=repmat(cls_m(1,:),n1,1);
    Sw=Sw+sum(sum((x1-mm1).^2))/n1;
    
    n3=length(class{3});
    x3=p_data(class{3},:);
    mm3=repmat(cls_m(3,:),n3,1);
    Sw=Sw+sum(sum((x3-mm3).^2))/n3;
%     
%     for i = 1:length(class)
%         ni=length(class{i});
%         xi=p_data(class{i},:);
%         mm=repmat(cls_m(i,:),ni,1);
%        % xi-mm 
%         Sw(i)=sum(sum((xi-mm).^2))/ni;
%     end

    fr=Sb/Sw;

end

