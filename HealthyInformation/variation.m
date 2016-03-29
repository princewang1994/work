function [ ngene ] = variation( gene )
%UNTITLED6 Summary of this function goes here
%   Detailed explanation goes here

    p=0.1;
    
    ngene=gene;
    
    nvar=int32(length(ngene)*p);
    
    for i = 1:nvar
        pos=int32(rand()*length(ngene));
        if(pos==0)
            %ngene(1)=1;
            continue
        end
        if ngene(pos)==0
            ngene(pos)=1;
        else
            ngene(pos)=0;
        end
    end
    
    
    

end

