#include<stdio.h>
#include<conio.h>
int pos(int a[]);
int main(){
    int a[7]={10,-20,-30,40,-50,60,70};
    pos(a);
    return 0;
}
int pos(int a[]){
    int i,p=0;
    for (i=0;i<7;i++){
        if(a[i]>0){
            p++;
        }
    }
    printf("there are %d positive numbers in the array",p);
}
