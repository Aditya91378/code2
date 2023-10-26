#include<stdio.h>
#include<conio.h>
int rev(int *,int *);
int display(int *,int *);
int main(){
    int i,a[7]={10,20,30,40,50,60,70},n=7;
    display(a,&n);
    rev(a,&n);
    display(a,&n);
    return 0;
}
int display(int *p,int *n){
    int i;
    for (i=0;i<*n;i++,p++){
        printf("%d ",*p);
    }
    printf("\n");
}
int rev(int *p,int *n){
    int i,temp;
    for (i=0;i<(*n/2);i++,p++){
        temp = *p;
        p=(p+(*n-(2*i)-1));
        *(p+(*n-(2*i)-1))=temp;
    }
}
