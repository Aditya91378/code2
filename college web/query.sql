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
