-- # Write your MySQL query statement below
select Product.product_name as product_name, Sales.year as year, Sales.price as price from Sales,Product where Sales.product_id = Product.product_id;