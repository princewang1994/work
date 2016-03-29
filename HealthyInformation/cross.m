function [ o1,o2 ] = cross( gene1,gene2 )
%UNTITLED4 Summary of this function goes here
%   Detailed explanation goes here

    pos=int32(rand()*length(gene1));
    
    o1=gene1;
    o2=gene2;

    if (pos==0)
       return
    end
    
    t=o1(pos:end);
    
    o1(pos:end)=o2(pos:end);
    
    o2(pos:end)=t;
    

end

