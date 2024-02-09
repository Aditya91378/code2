/*RATP2*/
/* Right angled  TrianglePattern 2*/
import java.util.Scanner;
public class RATP2{
		public static void main(String args[]){
		Scanner input= new Scanner(System.in);
					System.out.println("Please enter number of rows:");
		int numRows =input.nextInt();
		for (int i= 1; i<=numRows; i++){
		for (int j= i;j<=numRows; j++){
			if(j== numRows) System.out.print(i +" ");
			else System.out.print("* ");
	}
					System.out.println();
	}
		input.close();
		
}
}