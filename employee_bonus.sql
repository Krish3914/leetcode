-- select distinct name,bonus from Employee left join Bonus on (Employee.empId = Bonus.empId) where (bonus < 1000 OR bonus is null);


-- SELECT Employee.name,Bonus.bonus FROM Employee 
-- LEFT JOIN Bonus ON Employee.empID = Bonus.empID
-- WHERE bonus < 1000 OR Bonus IS NULL ;

select name, bonus from Employee left join Bonus on (Employee.empId = Bonus.empId) where (bonus < 1000 OR bonus is null);