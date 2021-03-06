function [ history_max,gene ] = SA( data, cls )
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
   
    n_feature=size(data,2);

    T=1000;
    
    dT=900;
    
    r=0.99;   
    
    %accept rate
    k=13;
    
    gene_bin=init_pop(1,n_feature);
    
    
    %current top value
    cur_tp = fit_rate(data,cls,gene_bin);
    
    elit_fid=fopen('elit.txt','a+');    
    
    history_max=0;
    
    elit=gene_bin;
    
    %while temprature lower then dT
    while(T > dT)
        
        for i = 1 : n_feature
            
            if mod(i,500)==0 
                fprintf('i=%d\n',i);
            end
            newgene=gene_bin;
            
            %inverse
            if newgene(i)==0
                newgene(i)=1;
            else
                newgene(i)=0;
            end
            
            tp=fit_rate(data,cls,newgene);
            
            if tp > history_max
                elit=newgene;
                history_max=tp
                fprintf(elit_fid,'%d\n',history_max);
                for el= 1: n_feature
                       fprintf(elit_fid,'%d ',elit(el));
                end
                fprintf(elit_fid,'\n');
            end
            
            dE=tp-cur_tp;
            
            if dE > 0 
                gene_bin=newgene;
                cur_tp=tp
            else
                if (exp( dE / k*T ) > rand() )
                    gene_bin=newgene;
                    cur_tp=tp
                end
            end
            
        end
        
        T=T*r
    end
    
    
    gene=zeros(1,sum(elit));
    k=1;
    for i = 1:length(elit)
        if(elit(i)==1)
            gene(k)=i;
            k=k+1;
        end
    end    
    fclose(elit_fid);
end

