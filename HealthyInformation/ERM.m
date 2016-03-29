function [ meet_rate ] = ERM( data, label , n_class)

   RandStream.setDefaultStream(RandStream('mt19937ar','seed',7));

   n_group=5;
   
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
   
%    group
%    for i = 1:n_instance
%        index=int32(rand()*n_instance);
%        if index==0
%             continue
%        end
%        temp_c=cls(i);
%        temp_d=data(i,:);
%        cls(i)=cls(index);
%        data(i,:)=data(index,:);
%        cls(index)=temp_c;
%        data(index,:)=temp_d;
%    end
   
   meet_rate=0;
   
   for test = 1 : n_group
       
        %make trainning set
        train=[];
        for i = 1 : n_group
            if i ~= test
                train=[train,group{i}];
            end
        end
        
        train_data=data(train,:);
        train_label=label(train);
        test_data=data(group{test},:);
        test_label=label(group{test});
        
        meet=0;        
        
        res=KNN(train_data,train_label,3,4,test_data);
        %model = svmtrain(train_cls,train_data, '-c 1 -g 0.07');
        %[res, accuracy, dec_values] = svmpredict(test_cls,test_data, model);
        %[res,label(group{test})]
        
        for t = 1 : length(test_label)            
            if res(t) == test_label(t)
                meet=meet+1;
            end
        end
        meet/length(test_label);
        meet_rate=meet_rate+meet/length(test_label);
   end
   
   meet_rate=meet_rate/n_group;
   


end