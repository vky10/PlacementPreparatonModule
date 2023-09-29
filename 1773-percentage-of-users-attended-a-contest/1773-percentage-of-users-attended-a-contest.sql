# Write your MySQL query statement below
select b.contest_id,round((count(distinct(b.user_id))*100/count(distinct(a.user_id))),2) as percentage
from users as a,
 register as b
group by b.contest_id
order by percentage desc,b.contest_id asc