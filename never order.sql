# Write your MySQL query statement below

Select name as Customers from Customers where Customers.id not in (select CustomerID from Orders);
