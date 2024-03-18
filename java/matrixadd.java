package mypackage;
import java.util.Scanner;
	public class matrixadd{
		public static void main(String [] args){
			int p,q,m,n;
		Scanner sc= new Scanner(System.in);
		System.out.println("enter no of rows in 1st matrix:");
		p=sc.nextInt();
		System.out.println("enter no of columns in 1st matrix:");
		q=sc.nextInt();
		System.out.println("enter no of rows in 2nd matrix:");
		m=sc.nextInt();
		System.out.println("enter no of columns in 1st matrix:");
		n=sc.nextInt();
		if (p==m && q==n)
	  {
		int a[][]= new int [p][q];
		int b[][]= new int [m][n];
		int c[][]= new int [m][n];
		System.out.println("enter all of  the elements of first matrix:");
			for (int i=0;i<p;i++){
						for (int j=0;j<p;j++){
				a[i][j]=sc.nextInt();
			}
		}
		System.out.println("enter all of  the elements of 2nd matrix:");
			for (int i=0;i<p;i++){
						for (int j=0;j<p;j++){
				b[i][j]=sc.nextInt();
			}
		}
		System.out.println("enter all of  the elements of first matrix:");
			for (int i=0;i<p;i++){
						for (int j=0;j<p;j++){
				System.out.println(a[i][j]+" ");
			}
				System.out.println(" ");
		}
		System.out.println("enter all of  the elements of second matrix:");
			for (int i=0;i<p;i++){
						for (int j=0;j<p;j++){
				System.out.println(b[i][j]+" ");
			}
				System.out.println("");
		}	
	
			for (int i=0;i<p;i++){
				for (int j=0;j<p;j++){
					for (int k=0;k<p;k++){					
					c[i][j]=a[i][j]+b[i][j];
			}
				System.out.println("");
		}	
	}

		System.out.println("Matrix after addition:");
			for (int i=0;i<p;i++){
						for (int j=0;j<p;j++){
				System.out.println(c[i][j]+"");
			}
				System.out.println("");
		}	
}
		else {
		System.out.println("Addition is not possible");
		}
	}
}