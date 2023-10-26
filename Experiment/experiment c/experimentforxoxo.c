#include<stdio.h>
												//kind of done
int main(){
		static int a[3][3],q,r,s,t,u,v,w,x,y;;
		int i,j,p=0;
		char m,b,c;
		//position of matrix
		   for(i=0,c=113;i<3;i++){
     for(j=0;j<3;j++,c++){
     	printf(" %c",c);
	 }
	 printf("\n");
		}
	//	taking input
	while(p<4){
			printf("1 player\nenter the position");
			scanf("%c",&b);
			fflush(stdin);
			switch(b){
	case 'q':	printf("enter the value");
		scanf("%d",&q);
		break;
	case 'r':	printf("enter the value");
		scanf("%d",&r);
		break;
	case 's':	printf("enter the value");
		scanf("%d",&s);
		break;
	case 't':	printf("enter the value");
		scanf("%d",&t);
		break;
	case 'u':	printf("enter the value");
		scanf("%d",&u);
		break;
	case 'v':	printf("enter the value");
		scanf("%d",&v);
		break;
	case 'w':   printf("enter the value");
		scanf("%d",&w);
		break;
	case 'x':	printf("enter the value");
		scanf("%d",&x);
		break;
	case 'y':	printf("enter the value");
		scanf("%d",&y);
		break;
	default :
		printf ("error");
		break;
	}
	fflush(stdin);
			printf("2 player\nenter the position");
			scanf("%c",&m);
		switch(m){
	case 'q':	printf("enter the value");
		scanf("%d",&q);
		break;
	case 'r':	printf("enter the value");
		scanf("%d",&r);
		break;
	case 's':	printf("enter the value");
		scanf("%d",&s);
		break;
	case 't':	printf("enter the value");
		scanf("%d",&t);
		break;
	case 'u':	printf("enter the value");
		scanf("%d",&u);
		break;
	case 'v':	printf("enter the value");
		scanf("%d",&v);
		break;
	case 'w':   printf("enter the value");
		scanf("%d",&w);
		break;
	case 'x':	printf("enter the value");
		scanf("%d",&x);
		break;
	case 'y':	printf("enter the value");
		scanf("%d",&y);
		break;
	default :
		printf ("error");
		break;
	}	
		a[0][0]=q,a[0][1]=r,a[0][2]=s,a[1][0]=t,a[1][1]=u,a[1][2]=v;
		a[2][0]=w,a[2][1]=x,a[2][2]=y;
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
  if( q==r==s==2){
  	printf("won");
  }
 else if  (t==u==v==2){
 	printf("won");
 }
 else if  (w==x==y==2){
 	printf("won");
 }
 else if(q==t==w==2){
 	printf("won");
 }
 else if(r==u==x==2){
 	printf("won");
 }
 else if(s==v==y==2){
 	printf("won");
 }
 if( q==r==s==1){
  	printf("won");
  }
 else if  (t==u==v==1){
 	printf("won");
 }
 else if  (w==x==y==1){
 	printf("won");
 }
 else if(q==t==w==1){
 	printf("won");
 }
 else if(r==u==x==1){
 	printf("won");
 }
 else if(s==v==y==1){
 	printf("won");
 }
 else if(q==x==y==2){
 	printf("won");
}
 else if(s==x==w==2){
 	printf("won");
 }
else if(q==x==y==1){
 	printf("won");
}
 else if(s==x==w==1){
 	printf("won");
 }
}




