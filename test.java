abstract class Shape{
	abstract  void draw(); 
}
class circle extends Shape{
void draw(){
	System.out.println("This is a circle");
	}
}
class rectangle extends Shape{
void draw(){
	System.out.println("This is a rectangle");
	}}
class test{
		public static void main(String args[]){
		Shape obj1= new circle();
		Shape obj2= new rectangle();
		obj1.draw();
		obj2.draw();
}
}
