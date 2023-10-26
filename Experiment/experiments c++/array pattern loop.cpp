#include<iostream>
using namespace std;
int main(){
	char a[]={'T','I','L','A','K'};
	int i,j;
	for(i=0;i<5;i++) {
	for(j=0;j<i;j++) {
		cout<<a[j];
		}
		cout<<"\n";
}for(i=5;i>0;i--) {
	for(j=0;j<i;j++) {
		cout<<a[j];
		}
		cout<<"\n";
}
}//one of the two loop should be decrementing
//it can be row or column
