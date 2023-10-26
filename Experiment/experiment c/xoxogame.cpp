#include<iostream>
using namespace std;
												//kind of done
int main(){
		static int a[3][3];
		int i,j,p=0;
		char b,c;
		//position of matrix
		   for(i=0,c=113;i<3;i++){
     for(j=0;j<3;j++,c++){
     	printf(" %c",c);
	 }
	 printf("\n");
		}
	//	taking input
	while(p<3){
			printf("1 player\nenter the position");
			scanf("%c",&b);
			switch(b){
	case 'q':	printf("enter the value");
		scanf("%d",&a[0][0]);
		break;
	case 'r':	printf("enter the value");
		scanf("%d",&a[0][1]);
		break;
	case 's':	printf("enter the value");
		scanf("%d",&a[0][2]);
		break;
	case 't':	printf("enter the value");
		scanf("%d",&a[1][0]);
		break;
	case 'u':	printf("enter the value");
		scanf("%d",&a[1][1]);
		break;
	case 'v':	printf("enter the value");
		scanf("%d",&a[1][2]);
		break;
	case 'w':   printf("enter the value");
		scanf("%d",&a[2][0]);
		break;
	case 'x':	printf("enter the value");
		scanf("%d",&a[2][1]);
		break;
	case 'y':	printf("enter the value");
		scanf("%d",&a[2][2]);
		break;
	default :
		printf ("error");
		break;
	}
			printf("2 player\nenter the position");
			scanf("%c",&b);
			switch(b){
	case 'q':	printf("enter the value");
		scanf("%d",&a[0][0]);
		break;
	case 'r':	printf("enter the value");
		scanf("%d",&a[0][1]);
		break;
	case 's':	printf("enter the value");
		scanf("%d",&a[0][2]);
		break;
	case 't':	printf("enter the value");
		scanf("%d",&a[1][0]);
		break;
	case 'u':	printf("enter the value");
		scanf("%d",&a[1][1]);
		break;
	case 'v':	printf("enter the value");
		scanf("%d",&a[1][2]);
		break;
	case 'w':   printf("enter the value");
		scanf("%d",&a[2][0]);
		break;
	case 'x':	printf("enter the value");
		scanf("%d",&a[2][1]);
		break;
	case 'y':	printf("enter the value");
		scanf("%d",&a[2][2]);
		break;
	default :
		printf ("error");
		break;
	}
	//	output printing the status of game
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){	
			printf(" %d",a[i][j]);
		}
		printf("\n");
		}
		p++;
	}
		
   //checking part
  if( a[0][0]==a[0][1]==a[0][2]==2){
  	printf("won");
  }
 else if  (a[1][0]==a[1][1]==a[1][2]==2){
 	printf("won");
 }
 else if  (a[2][0]==a[2][1]==a[2][2]==2){
 	printf("won");
 }
 else if(a[0][0]==a[1][0]==a[2][0]==2){
 	printf("won");
 }
 else if(a[0][1]==a[1][1]==a[2][1]==2){
 	printf("won");
 }
 else if(a[0][2]==a[1][2]==a[2][2]==2){
 	printf("won");
 }
 if( a[0][0]==a[0][1]==a[0][2]==1){
  	printf("won");
  }
 else if  (a[1][0]==a[1][1]==a[1][2]==1){
 	printf("won");
 }
 else if  (a[2][0]==a[2][1]==a[2][2]==1){
 	printf("won");
 }
 else if(a[0][0]==a[1][0]==a[2][0]==1){
 	printf("won");
 }
 else if(a[0][1]==a[1][1]==a[2][1]==1){
 	printf("won");
 }
 else if(a[0][2]==a[1][1]==a[2][0]==1){
 	printf("won");
 }
 else if(a[0][0]==a[1][1]==a[2][2]==2){
 	printf("won");

}
 else if(a[0][0]==a[1][1]==a[2][2]==2){
 	printf("won");
 	
 }
 else if(a[0][2]==a[1][1]==a[2][0]==1){
 	printf("won");
 }
 else if(a[0][2]==a[1][2]==a[2][2]==1){
 	printf("won");
 }
}

