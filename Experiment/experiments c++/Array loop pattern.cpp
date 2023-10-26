#include<iostream>
using namespace std;

int main(){
	int i,j;
	char a[5]={'T','I','L','A','K'};
	
		for(i=0;i<5;i++) {
			for(j=0;j<i;j++) {
		cout<<" "<<a[j];
 		}
		cout<<"\n";
		}
	for(i=5;i>0;i--) {
	for(j=0;j<i;j++) {
		cout<<" "<<a[j];
}
		cout<<"\n";
}	


}
