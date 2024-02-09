	import java.util.Scanner;
		 class MenuCircle{
public static void main(String args[]){
	Scanner scan =new Scanner(System.in);
		
		System.out.println("	Circle menu");
		System.out.println("	==========");
		System.out.println("	1.Calculate Diameter");
		System.out.println("	2.Calculate Circumference" );
		System.out.println("	3.calculate Area ");
		System.out.println();

		
				System.out.println("	Enter your choice: ");
		int choice = scan.nextInt();
		double radius;
		switch (choice){
					case 1 :
								System.out.println();
						radius = scan.nextDouble();	
								System.out.println("Diameter is:" + (2*radius));
							break;
					case 2 :
								System.out.println();
						radius = scan.nextDouble();	
								System.out.println("Circumference is:" + (2* Math.PI * radius));
							break;
					case 3 :
								System.out.println();
						radius = scan.nextDouble();	
								System.out.println(" Area is:" + ( Math.PI * radius * radius));
							break;
				default:
					System.out.println("***Invalid ***");		
							}
						scan.close();
}}