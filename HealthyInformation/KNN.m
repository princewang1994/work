function [ class, prob ] = KNN( data, cls, nclass , k, ob )
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here

    prob=zeros(size(ob,1),1);
    
    row=size(data,1);
    
    n_test=size(ob,1);
    
    class=zeros(n_test,1);
    
    for t = 1 : size(ob,1)
        
        dis=zeros(1,row);
    
        for i = 1 : row
            dis(i)=distance(ob(t,:),data(i,:));
        end
    
        [s,index] = sort(dis);
    
        neighbor=index(1:k);
       
        count=zeros(1,nclass);
    
        for i = 1 : k
             c=cls(neighbor(i));
             %count(c)=count(c)-log(0.5*dis(neighbor(i)));
             %count(c)=count(c)+1;
             count(c)=count(c)+1/dis(neighbor(i));
        end
    
        %count
        [m,res]=max(count);
        
        class(t)=res;
        
        prob(t)=m/sum(count);
        
        
    end

end

