Class Excr{
 int number = 10;
public static void count(Excr e)
e.number = e.number+1;
System.out.println("Inside method"+e.number);
 }
 public static void main(String args []){
 Excr e = new Excr ();
 System.out.println("Before calling method"+e.number);
count (e);
  System.out.println("After caling method"+e.number);
  count (e);
}