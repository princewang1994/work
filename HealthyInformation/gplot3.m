function [  ] = gplot3( data,Type,g1,g2,g3 )
%UNTITLED3 Summary of this function goes here
%   Detailed explanation goes here
    plot3(data(Type{1},g1),data(Type{1},g2),data(Type{1},g3),'.');grid
    hold on
    plot3(data(Type{2},g1),data(Type{2},g2),data(Type{2},g3),'r.');
    
    plot3(data(Type{3},g1),data(Type{3},g2),data(Type{3},g3),'g.');

end

