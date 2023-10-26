#include<stdio.h>
#include<conio.h>
int main(){
    int i,table[10];
    for (i=0;i<10;i++){
        table[i]=5*(i+1);
    }
    for (i=0;i<10;i++){
       printf("%d\n",table[i]);
    }
    return 0;
}
