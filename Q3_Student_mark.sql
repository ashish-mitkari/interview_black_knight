-- The given table 'students' contains the total marks of a student in a class. The teacher of the class wants to assign grades to the students with the following logic:

-- ·         Greater > 90 | A+

-- ·         Greater > 70 | A

-- ·         Greater > 50 | B

-- ·         Greater >= 40 | C

-- ·         Less than 40 | Fail

-- Write an SQL query to achieve the same. Return ID, name, marks, grade for each student.


SELECT ID, NAME, MARK ,
(IF(MARK > 90, 'A+', IF (MARK > 70, 'A', 
       IF(MARK > 50, 'B', IF (MARK >= 40, 'C', 'FAIL'))))) AS Grade
	   FROM STUDENTS