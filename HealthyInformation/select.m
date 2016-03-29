function [ s ] = select( p )
%UNTITLED5 Summary of this function goes here
%   
    s=length(p);

    pointer=rand();
    
    m=0;
    for i = 1: length(p)
        m=m+p(i);
        if(pointer <= m)
            s=i;
            break
        end    
    end
   
end

