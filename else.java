import java.util.Scanner;
class program12
	{
		public static void main (String args[]){
		Scanner ob= new Scanner(System.in);
		System.out.println("Please enter your marks ");
		int mark=ob.nextInt();
		if(mark>=35 && mark<=100){
		System.out.println(" pass ");
	}
		else if(mark>=0 && mark<35){
		System.out.println("fail");
	}
		else {
			System.out.println("Invalid Marks");
}
}
}