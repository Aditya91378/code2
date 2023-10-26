#include<iostream>
using namespace std;
int fact (int);
int main()
{
	cout<< fact (5);
		return 0;
}
	int fact (int n){
		if (n==1||n==0){
			return 1;
		}
		else {
			return n*fact(n-1);
		}
	}

