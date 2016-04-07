function [ meet_rate ] = ERM( data, label ,group )

  
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
   n_group=length(group);
   
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
        
       % meet=0;        
        
        res=KNN(train_data,train_label,3,4,test_data);
        %model = svmtrain(train_label,train_data, '-c 1 -g 0.07');
        %[res, accuracy, dec_values] = svmpredict(test_label,test_data, model);
        [res,label(group{test})];
        
        meet=length(find(res==test_label));
%         for t = 1 : length(test_label)            
%             if res(t) == test_label(t)
%                 meet=meet+1;
%             end
%         end

        meet=meet/length(test_label);
        
        meet_rate=meet_rate+meet;
   end
   
   meet_rate=meet_rate/n_group;
   


end