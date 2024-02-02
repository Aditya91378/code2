abstract class Bike {
	abstract void run();
}
class honda4 extends Bike {
void run(){ 
	System.out.println("running string");
}
	public static void main (String args[]){
	Bike obj= new honda4();
	obj.run();
}
}