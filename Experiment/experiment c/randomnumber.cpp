#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 int main(){
int	n,a=0,b=0;
	printf("1.stone 2.paper 3.scissors\nEnter your choice");
	scanf("%d",&n);
	for(i=0;i<3;i++){
	srand(time(NULL));
	int p=rand()%4;
	printf("computer chose %d          ",p);
	if(p==n){
		printf("tie\n");
	}
	while(p==0){
	srand(time(NULL));
	 p=rand()%4;
	}
	else if(p==3&&n==1){
		printf("user won\n");
		b++;
	}
	else if(p==1&&n==3){
		printf("computer won\n");
		a++;
	}
	else if(p<n){
		printf("user won\n");
		b++;
	}
	else{
		printf("computer won\n");
		a++;
	}
	}
   if(a==b){
   	printf ("There is a tie");
   }
   else if(a<b){
   	printf(" user has won");
   }
   else if(b>a){
		printf("computer has won\n");
   }
	return 0;
}

