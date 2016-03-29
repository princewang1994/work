function [ out ] = normalization( in )
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here
    amin=repmat(min(in),size(in,1),1);
    
    amax=repmat(max(in),size(in,1),1);
    
    out = (in-amin)./(amax-amin);

end

