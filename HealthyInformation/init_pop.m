function [ pop ] = init_pop( npop, nfeature )
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
        %random initialize population
        
    pop=zeros(npop,nfeature);   
  
    %elit=[9851   11127    15382     7832    12876     3192    6812   1828  10090    726    6777    1447    7714    3314    1939   3712];
    %elit=[ 13028        7175        2998        2154        3502       10660       13740        9878   15708        8600]
    elit=1:10;
    for i =1:npop
        for k=1:10
            j=int32(rand()*nfeature);
            if(j==0)
                continue
            end
            pop(i,j)=1;
        end
    end
    
%     for i =1:npop
%         for j=1:length(elit)
%             
%             pop(i,elit(j))=1;
%             
%         end
%     end

end

