#include<iostream>
using namespace std;
int *point(){
	int a=10;
	return &a;
}
int main(){
	int a[3];
	int*ptr=(int*)malloc(3*sizeof(int));
		printf(" %d",*ptr);
}
//int main ()
//{
//    //If variable goes out of scope
//    int *ptr;
//    {
//        int a=4;
//    }
//    ptr=&a;
//    printf("%d",*ptr);
//    //Ptr now becomes dangling pointer
//    return 0;
//}
