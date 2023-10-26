#include<string.h>
#include<stdio.h>
int main(){
	int k,i,j,n=0,c=0;
	static char p[50][50],temp[250],userinput[50];
	printf("enter anything\n");
	scanf("%[^\n]",temp);
	for(i=0;i<50;i++){
		
		for(j=0;j<50;j++){
			if((temp[j+n]>=65&&temp[j+n]<=90)||(temp[j+n]>=97&&temp[j+n]<=122)){
				p[i][j]=temp[j+n];
			}
			else if(temp[j+n]==0){
				goto label1;
			}
			else{
				break;
			}
		}	
		n+=j+1;	
	}
	label1:
	printf("enter word\n");
	fflush(stdin);
	scanf("%[^\n]",&userinput);
	fflush(stdin);
	for(k=0;k<=i;k++){
		strlwr(userinput);
		strlwr(p[k]);
		if(strcmp(p[k],userinput)==0){
			c++;
		}
	}
	printf("the word \"%s\" is written %d times\n",userinput,c);
}
