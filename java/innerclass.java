interface myinta{
	void dis();
interface myintb{
	void meth();
	}
}
	public class innerclass implements myinta.myintb{
	public void meth(){
	System.out.println("nested interface method");
}
public static void main(String args[]){
	myinta.myintb in =new innerclass();
	in.meth();
	}
}
