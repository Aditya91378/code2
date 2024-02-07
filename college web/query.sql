--SELECT * FROM EMP0 WHERE JOB='SALESMAN' OR JOB='CLERK' 
--SELECT * FROM EMP0 WHERE SALARY<=1000
--SELECT * FROM EMP0 WHERE SALARY BETWEEN  2000 AND 5000
--SELECT * FROM EMP0 WHERE  ENAME LIKE 'S%'; 
--SELECT * FROM EMP0 WHERE ENAME IN ('BALCK','KING','CLERK','SMITH') 
--SELECT * FROM EMP0 WHERE JDATE LIKE '%81'
--SELECT * FROM EMP0 WHERE ENAME LIKE '%A%E' 
--SELECT * FROM EMP0 WHERE MGR=7698 
--SELECT * FROM EMP0 WHERE ENAME LIKE '__R_'
--SELECT * FROM EMP0 WHERE COMMISION BETWEEN 300 AND 500 
--SELECT * FROM EMP0 WHERE ENAME LIKE 'J%' 
--SELECT * FROM EMP0 WHERE ENAME LIKE '%N'
select * from emp0;
select MAX(sal)from emp0;
select min(sal)from emp0;
select sum(sal)from emp0;
select count(commision)from emp0;
select MAX(salary), deptno from emp0 GROUP BY deptno ;
create table Student( s_id INT ,sname varchar(15),perc INT,gender char ,Branch VARCHAR(10));
--DESC STUDENT;

--DROP TABLE  student;
DROP TABLE STUDENT;
INSERT INTO Student VALUES (101,'hari',99,'M','CSE');
INSERT INTO Student VALUES (102,'Ramya',90,'F','ESE');
INSERT INTO Student VALUES (103,'Sandeep',95,'M','CSE');
INSERT INTO Student VALUES (104,'Sony',78,'F','CSE');
INSERT INTO Student VALUES (105,'Saradhi',88,'M','CIVIL');
INSERT INTO Student VALUES (106,'Yamini',98,'F','EE');
select * FROM Student;
SELECT count(*),Branch FROM Student GROUP BY Branch ;
SELECT count(*),gender FROM Student GROUP BY gender ;
SELECT avg(perc),gender FROM Student GROUP BY gender ;
SELECT max(perc),gender FROM Student GROUP BY gender ;
SELECT MIN(perc),gender,SNAME FROM Student GROUP BY gender ,SNAME;


DELETE FROM student
WHERE ROWID NOT IN (
  SELECT MAX(ROWID)
  FROM student
  GROUP BY s_id, sname, perc
);
SELECT max(sal),dept_no FROM emp group BY dept_no having max(sal)>=3000 order by max(sal) ASC;
SELECT count(*),dept_no FROM emp group BY dept_no  order by count(*) DESC;
SELECT * FROM emp  order by sal DESC;
SELECT * FROM emp  order by sal ASC;
SELECT * FROM emp  where dept_no=10  order by sal ASC;
SELECT max(sal),dept_no FROM emp group BY dept_no  order by max(sal) ASC;
