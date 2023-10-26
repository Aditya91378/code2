#include<stdio.h>
#include<string.h>
int main(){
    int n,j=0,i,temp;
    char a[64];
    printf("enter number");
    scanf("%d",&n);
    while(n>=1){
        a[j]=(n%2);
        n=n/2;
        j++;
    }
    for(i=0;i<(j/2);i++){
        temp = a[i];
        a[i] = a[j-i-1];
        a[j-i-1] = temp;
    }
    for(i=0;i<j;i++){
        printf("%d",a[i]);
    }
}
