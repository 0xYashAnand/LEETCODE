# Write your MySQL query statement below
SELECT * FROM Cinema
WHERE description NOT LIKE "%boring%" AND
      ID%2<>0
      ORDER BY rating DESC;