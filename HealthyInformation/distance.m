function [ dis ] = distance( a , b  )
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here

    dis=sum((a-b).^2)^0.5;

end

