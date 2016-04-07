function [ meetrate ] = test( data, g, label )
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
    gene=zeros(1,sum(g));
    k=1;
    
    for i = 1:length(g)
        if(g(i)==1)
            gene(k)=i;
            k=k+1;
        end
    end
    
    meetrate=ERM(data(:,gene),label,get_group(label,2));

end

