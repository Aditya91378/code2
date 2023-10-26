#include <stdio.h>

int main() {
  int n,i,p=0,ai=0;
  int a[1000];
  for(n=2;n<222;n++){
    p=0;
    for(i=1;i<=n;i++){
      if(n%i==0){
        p++;
        
      }
    }
    if(p==2){
      a[ai]=n;
      printf("%d\n",a[ai]);
      ai++;
    }
  }
  
}
