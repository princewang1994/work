function [ fr ] = svm_fit_rate( data,class_vec,gene_bin)
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here


    %make cells {[][][]};
    
    gene=zeros(1,sum(gene_bin));
    k=1;
    for i = 1:length(gene_bin)
        if(gene_bin(i)==1)
            gene(k)=i;
            k=k+1;
        end
    end    
    
    fr=ERM(data(:,gene),class_vec,2);
    
    
    

end

