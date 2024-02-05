import java.util.Scanner;
class program13
	{
		public static void main (String args[]){
		Scanner ob= new Scanner(System.in);
		float perc;
		System.out.println("Please enter your math marks ");
		float math=ob.nextInt();
		System.out.println("Please enter your eng marks ");
		float sci=ob.nextInt();
		System.out.println("Please enter your science marks ");
		float eng=ob.nextInt();
		 perc=math+sci+eng;
		if( math>=35 ||sci>=35 ||eng>=35){
		System.out.println(" fail");
	}
		else if( perc>=85 && perc <= 100){
		System.out.println("O ");
	}
		else if( perc>=70 && perc< 85){
		System.out.println("A");
	}
		else if( perc>= 55 && perc< 70){
		System.out.println("B");
	}
		else if( perc >= 45 && perc < 55){
		System.out.println("C");
	}
		else if( perc>= 35 && perc < 45 ){
		System.out.println("D");
	}
		else {
			System.out.println("Invalid Marks");
}
}
}