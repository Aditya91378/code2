class Excu{
 public static void count(int number){
 number = number+1;
System.out.println("Inside method"+ number);
 }
 public static void main(String args[]){
 int number = 10;
 System.out.println("before calling a method"+ number);
count (number);
System.out.println("after calling a method"+ number);
 }
}

