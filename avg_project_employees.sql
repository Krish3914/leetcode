# Write your MySQL query statement below

Select project_id, round(Avg(experience_years),2) as average_years from Project,Employee where (Employee.employee_id = Project.employee_id) Group by Project.project_id;