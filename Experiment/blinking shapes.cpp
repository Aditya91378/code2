#include<iostream>
#include<windows.h>
using namespace std;

	int main(){
		int i,j;
		label1:
		while(5){
		for( i=0;i<5;i++){
		for(j=0;j<5;j++){
			
			cout<<"*";
		}
		cout<<"\n";
	Sleep(1000);
	goto label1;
	}
	system("pause");
}
		}
//int main(){
//	int i,j;
//	
//for(i=0;i<3;i++){
//	for( j=0;j<1;j++){
//		cout<<" ";
//	}
//	cout<<"\n";
//}
//for(i=0;i<5;i++){
//	for( j=5;j>i;j--){
//		cout<<" ";
//	}
//		for( j=0;j<i;j++){
//		cout<<"*";
//	}
//	for(j=0;j<20;j++){
//		cout<<"*";
//	}
//	cout<<"\n";
//}
//}



