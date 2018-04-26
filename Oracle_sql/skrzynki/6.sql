-- 1
SELECT
    first_name, last_name, salary
FROM
    emp
WHERE
    salary < 1300
ORDER BY
    last_name ASC;
	
-- 2
SELECT
    date_ordered || ' ' || total
FROM
    ord

-- 3
SELECT
    first_name, last_name
FROM
    emp
WHERE
    title = 'Stock Clerk' AND
    salary > (SELECT avg(salary) from emp where title = 'Warehouse Manager')
	
-- 4
SELECT
    count(*)
FROM
    emp
WHERE
    salary < (select AVG(salary) from emp);

-- 5
select
    last_name, first_name
from
    emp
where
    26  < abs(floor(months_between(start_date, (select to_date('2017-03-01', 'yyyy-mm-dd') from  dual))/12))
order by
	start_date;
-- 6
select
    sales_rep_id, sum(total)
from ord
group by sales_rep_id;

-- 7
select
    sales_rep_id, sum(total)
from ord
group by sales_rep_id
having sum(total) = (select max(sum(total)) from ord group by sales_rep_id);

-- 8
-- nie wiem jak zrobić

-- 9
-- nie rozumiem zadania

-- 10
select 
    product.name, inventory.warehouse_id
from product, inventory
where product.id = inventory.product_id and inventory.OUT_OF_STOCK_EXPLANATION is not null;

-- 11
select
    product.name, sum(inventory.AMOUNT_IN_STOCK)
from
    product, inventory
where
    product.id = inventory.product_id
group by
    product.name
having
    sum(inventory.AMOUNT_IN_STOCK) > 500;
	
-- 12
select
    name
from
    product
where
    name like '% % %' AND
	name not like "% % % %';
