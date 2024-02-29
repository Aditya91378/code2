		class Menu {
public void display(){
	System.out.println("Today's breakfast is idli & sambhar  ");


	}
}
	class Dosa extends Menu{
public void display(){
	System.out.println("Today's breakfast includes Dosa  ");

	}
public void print(){
	super.display();
}
}
	class Mainmenusuper {

	public static void main(String args[]){
		Dosa d=new Dosa();
		d.display();
		d.print();


}

}