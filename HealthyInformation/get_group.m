function [ group ] = get_group( label , n_class ,n_group)
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here

   %n_group=5;
   if nargin<3
        n_group=5;
   end
   
   cls=classification(label,n_class);
   
   g_size=zeros(n_class,1);
   
   for i=1:n_class
      g_size(i)=floor(length(cls{i})/n_group);
   end
   
   group=cell(n_group,1);
%    
%    for i = 1 : n_group
%         group{i}=((i-1)*g_size+1):((i-1)*g_size+g_size);
%         if i == n_group
%             group{i}=((i-1)*g_size+1):n_instance;
%         end
%         
%    end

    for i= 1 : n_group
        
        for j = 1:n_class
            
            
            if i == n_group
               group{i}=[group{i},cls{j}(((i-1)*g_size(j)+1):end)];
            else
               group{i}=[group{i},cls{j}((i-1)*g_size(j)+1:((i-1)*g_size(j)+g_size(j)))];
            end
            
        end
    end

end

