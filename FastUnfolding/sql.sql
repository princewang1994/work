
select source_index, dest_index 
		from cite inner join paper as p on source_index=p.id 
			inner join paper as q on dest_index=q.id
		where (p.year between 1990 and 1992) and (q.year between 1990 and 1992)
