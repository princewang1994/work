create table paper
(
	id int(10) primary key,
	title varchar(100) ,
	year int(5),
	author varchar(100),
	abstract varchar(1000)
);

create table cite
(
	source_index int(10), 
	dest_index int(10), 
);
