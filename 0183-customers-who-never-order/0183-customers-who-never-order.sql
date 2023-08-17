# Write your MySQL query statement below
SELECT name as Customers

FROM Customers 

LEFT JOIN Orders 

ON customers.id = Orders.customerId

WHERE Orders.customerId is NULL;



