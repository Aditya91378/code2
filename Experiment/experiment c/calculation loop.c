#include<stdio.h>//user defined function
int main(){
	int a,b,ch,c;
	do{
	printf("\nenter the no");
	scanf("%d",&a);
	printf("enter the no");
	scanf("%d",&b);
	printf("\n1.for addition");
	printf("\n2. for subtractio");
	printf("\n3. for multiplication");
	printf("\n4. for division");
	printf("\n0. for exit");
	printf("\nenter the ch");
	scanf("%d",&ch);
	
	switch(ch){
		case 0:
			break;
		case 1:
			c=a+b;
			printf("%d",c);
			break;
		case 2:
			c=a-b;
			printf("%d",c);
			break;
		case 3:
			c=a*b;
			printf("%d",c);
			break;
		case 4:
		    c=a/b;
		    printf("%d",c);
		    break;
		default:printf("exit");
		break;
		}			
	
	}while(ch!=0);
return 0 ;
}

