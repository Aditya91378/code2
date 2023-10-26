#include<iostream>
using namespace std;
class sample{
	public:
		int a;
		void show (){
			cout <<" value is "<<a;
		}
		sample(int x){
			a=x;
		}
		sample operator+(sample &ref){
			sample temp(0);
			temp.a=a+ref.a;
			return temp;
		}
		sample operator*(sample &ref){
			sample temp(0);
			temp.a=a*ref.a;
			return temp;
		}
		sample operator<<(sample &ref){
			sample temp(0);
			temp.a=a-ref.a;
			return temp;
		}
};
int main(){
	sample obj1(5),obj2(4),obj3(0);
	obj1.show();
	obj2.show();
	obj3=obj1+obj2;
	obj3.show();
	obj3=obj1*obj2;
	obj3.show();
	obj3=obj1<<obj2;
	obj3.show();
	
}
