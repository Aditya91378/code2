#include<iostream>
using namespace std;
int prime(){
	int a,i,p=0;

	cout<<"Enter the number";
	cin>>a;
	for(i=1;i<=a;i++) {
		if(a/i==0){
			p++;
		}	
		return p;
}
}
int main(){
	int p;
	prime();
		if(p=2){
			cout<<"it is a prime number";
			}
		else{
			cout<<"it is not a prime number";
		}
}
