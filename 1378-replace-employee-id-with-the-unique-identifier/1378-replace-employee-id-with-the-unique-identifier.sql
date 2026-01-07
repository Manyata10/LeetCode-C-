SELECT unique_id, name
FROM Employees e 
LEFT JOIN EmployeeUNI eu 
ON eu.id=e.id;

-- SELECT unique_id, name
-- FROM Employees as A
-- left JOIN EmployeeUNI as B
-- ON A.id = B.id;