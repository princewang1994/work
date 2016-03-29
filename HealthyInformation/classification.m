function [ cls ] = classification( class , nclass )
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
    
    cls=cell(1,nclass);
    
    %classification
    for i = 1: length(class)
        type=int32(class(i));
        cls{type}=[cls{type},i];
    end

end

