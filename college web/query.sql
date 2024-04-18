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


select current_date from dual;

select month-between(to_date,('02-02-1995','mm-dd-yyyy'),to_date('01-01-1995','mm-dd-yyyy'))from dual;
select next_day('18-mar-2016','monday'),'next_day'from dual;
select to_char(sysdate,'yyyy-mm-dd''hh-mm-ss')from dual;


select emp_job, sum(sal) as totalsalary from emp group by emp_job;
select dept_no from emp group by dept_no having avg(sal) between 2500 and 3000;
select dept_no, count(*) as clerk from emp where emp_job='clerk' group by dept_no;
SELECT * FROM emp;
create table  table1 (Empid int ,Ename VARCHAR (10));
INSERT INTO table1 VALUES (1,'Reena');
INSERT INTO table1 VALUES (2,'Seema');
INSERT INTO table1 VALUES (3,'Geeta');
INSERT INTO table1 VALUES (7,'Rohit');
INSERT INTO table1 VALUES (8,'Rohan');
SELECT * FROM table1;
create table  table2 (Empid int ,Ename VARCHAR (10));
INSERT INTO table2 VALUES (4,'Akash');
INSERT INTO table2 VALUES (1,'Reena');
INSERT INTO table2 VALUES (2,'Seema');
INSERT INTO table2 VALUES (76,'Geeta');

select * FROM table1 
            MINUS
            SELECT * FROM table2;
select * FROM table1 
            union
            SELECT * FROM table2;
select * FROM table1 
            INTERSECT
            SELECT * FROM table2;
select * FROM table1 
            UNION ALL
            SELECT * FROM table2;
create table  Emp99 (Empid int ,Ename VARCHAR (10),Address varchar(20));
INSERT INTO emp99 VALUES (20,'hari','Mumbai');
SAVEPOINT a;
INSERT INTO emp99 VALUES (12,'naresh','Chandrapur');
SAVEPOINT b;
INSERT INTO emp99 VALUES (27,'Suresh','Raipur');
SAVEPOINT c;
ROLLBACK to c;
SELECT * FROM emp99;
delete from emp99 where empid =27
SELECT * FROM emp0 where deptno=(SELECT deptno FROM emp0 where ename='SMITH');
SELECT * FROM emp0;
SELECT * FROM emp0 where sal>(SELECT sal FROM emp0 where ename='FORD');
SELECT * FROM emp0 where hiredate>(SELECT hiredate FROM emp0 where ename='JONES');
SELECT * FROM emp0 where sal>(SELECT sal FROM emp0 where ename='BLAKE');
SELECT * FROM emp0 where sal=(SELECT MAX(sal) FROM emp0 where SAL < (SELECT MAX(sal) FROM emp0 ));
SELECT * FROM emp0 where MGR =(SELECT EMPNO FROM emp0 where ename='KING');
SELECT * FROM emp0 where deptno=(SELECT deptno FROM emp0 where ename='BLAKE')  AND ENAME !='BLAKE';
SELECT * FROM EMP0 WHERE DEPTNO =(SELECT DEPTNO FROM EMP0 WHERE ENAME LIKE 'T%');
SELECT * FROM EMP0 WHERE SAL>(SELECT AVG(SAL) FROM EMP0) AND  DEPTNO=(SELECT DEPTNO FROM EMP0 WHERE ENAME LIKE 'T%') ;
SELECT * FROM emp0 where sal=(SELECT MAX(sal) FROM emp0 where SAL < (SELECT MAX(sal) FROM emp0 WHERE SAL< (SELECT MAX(sal) FROM emp0 where SAL < (SELECT MAX(sal) FROM emp0) ) ));
--GROUP BY deptno;
UPDATE EMP0
SET MGR =7839 WHERE ENAME='JONES';
create table dept(DEPTNO INT ,d_name Varchar(21) NOT NULL,LOC VARCHAR(25) );
--DROP TABLE DEPT;
ALTER TABLE DEPT RENAME COLUMN DEPTNO TO DEPT_NO;
INSERT INTO DEPT VALUES(10,'ACCOUNTANT','NEWYORK');
INSERT INTO DEPT VALUES(20,'RESEARCH','DALLAS');
INSERT INTO DEPT VALUES(30,'SALES','CHICAGO');
INSERT INTO DEPT VALUES(40,'OPERATIONS','BOSTON');
SELECT * FROM EMP;
SELECT * FROM DEPT;
DESC EMP;
ALTER TABLE DEPT ADD CONSTRAINT PK PRIMARY KEY (DEPT_NO);
ALTER TABLE EMP ADD CONSTRAINT FK FOREIGN KEY (DEPT_NO)REFERENCES DEPT(DEPT_NO);
SELECT * FROM EMP WHERE DEPT_NO IN (SELECT DEPT_NO FROM DEPT WHERE LOC='CHICAGO');
SELECT * FROM EMP WHERE DEPT_NO IN (SELECT DEPT_NO FROM DEPT WHERE D_NAME IN ('ACCOUNTANT','OPERATIONS','SALES'));
SELECT * FROM emp;
SELECT * FROM dept;

select * from emp e where exists 
(select dept_no from dept d where d.dept_no=e.dept_no);

select d_name from dept where dept_no in
(select dept_no from emp  where emp_job='ANALYST' GROUP by dept_no having count(*)>=1); 

SELECT * FROM emp e where exists                                                      
(select loc from dept d where d.dept_no=e.dept_no and loc!='NEWYORK');

select * from dept where 
dept_no =(select dept_no from emp  where emp_job='CLERK' and
mgr=(select emp_id from emp  where emp_name='BLAKE') and
sal<(select sal from emp  where emp_name='MARTIN')); 
SELECT * FROM dept;
    update  dept 
    set 
    DNAME ='Sales'
    where dept_no =30
    ;
Select * from emp;
Select * from emp
    Inner join dept
    on(emp.dept_no=dept.dept_no );
Select Emp_id,Emp_name,Dname,LOC from emp
    Inner join dept
    on(emp.dept_no=dept.dept_no );
    Select Emp_id,Emp_name,Dname,LOC from emp
    left outer join dept
    on(emp.dept_no=dept.dept_no );
    Select Emp_name,LOC from emp
    Inner join dept
    on(emp.dept_no=dept.dept_no );
    Select Dname,sal*12 as Annualsal from emp 
    Inner join dept 
    on(emp.dept_no=dept.dept_no ) where emp.sal>2340;
    Select *  from emp 
    Inner join dept 
    on(emp.dept_no=dept.dept_no ) where emp_job  like 'S%' and dname like 'S%';    
create table salgrade(grade int,losal int,hisal int );
insert into salgrade values(1,700,1200);
insert into salgrade values(2,1201,1400);
insert into salgrade values(3,1401,2000);
insert into salgrade values(4,2001,3000);
insert into salgrade values(5,3001,9000);
        select * from salgrade;
        select ename ,job,sal from emp,salgrade emp.sal > salgradeemp.losal and empsal<salgrade.hisal;
SET SERVEROUTPUT ON
DECLARE
I NUMBER :=0;
N INT ;
RESULT NUMBER;
BEGIN 
N:=&N;
LOOP 
I:=I+1;

RESULT:=N*I;
DBMS_OUTPUT.put_line('RESULT'||'='|| RESULT);
IF I>=10 THEN
EXIT;
END IF;
END LOOP;
END;
SET SERVEROUTPUT ON
DECLARE
A INT;
B INT;

BEGIN
A:=0;
B:=&B;
WHILE
A<B
LOOP
A:=A+1;
DBMS_OUTPUT.PUT_LINE(A);
END LOOP;
END;
CREATE TABLE USER2(ID NUMBER(10) PRIMARY KEY,NAME VARCHAR2(30));
CREATE PROCEDURE INSERTUSER1
(ID IN NUMBER ,NAME IN VARCHAR2)
IS BEGIN
INSERT INTO USER2 VALUES (ID,NAME);
END;
SELECT * FROM USER2;
