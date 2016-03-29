function [ res ] = zscore( data )
%z-score normalization

    row=size(data,1);
    
    s=std(data);
    
    x=mean(data);
    
    x=repmat(x,row,1);
    s=repmat(s,row,1);
    
    res=(data-x)./s;    
    


end

