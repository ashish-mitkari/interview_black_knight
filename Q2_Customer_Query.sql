
-- A retail company maintains the data of its customers in the CUSTOMER table.
-- Write a query to print the IDs and the NAMEs of the customers, sorted by CUSTOMER.NAME in descending order.
-- If two or more customers have the same CUSTOMER.NAME, then sort these by CUSTOMER.ID in ascending order.

select ID  , Name  from CUSTOMER ORDER BY NAME DESC, ID ASC  

