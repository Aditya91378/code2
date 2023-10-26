
#include<iostream>
using namespace std;

class demo{
	int a,b;
	public:
	demo(int x,int y){
		a=x;
		b=y;
	}
	void show(){
		cout <<"sum of a is "<<a<<" b "<<b<<endl;
	}
	demo  operator +(demo &ref){
		demo temp(0,0);
		temp.a=a+ref.a;
		temp.b=b+ref.b;
		return temp;
	}
	demo  operator *(demo &ref){
		demo temp(0,0);
		temp.a=a*ref.a;
		temp.b=b*ref.b;
		return temp;
	}
	demo  operator <<(demo &ref){
		demo temp(0,0);
		temp.a=a<<ref.a;
		temp.b=b<<ref.b;
		return temp;
	}
};
int main(){
	demo obj1(2,4),obj2(3,4),obj3(0,0);
	obj3=obj1+obj2;
	obj3.show();
	obj3=obj1*obj2;
	obj3.show();
	obj3=obj1<<obj2;
	obj3.show();
}
