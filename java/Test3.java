class Test3 {
	interface  myinterface{
	void mark ();
}
	class innerclass implements myinterface{
	public void mark(){
	System.out.println("You have passed in exams");
	}
}
	public static void main(String args[]){
	innerclass in =new Test3().new innerclass();
	in.mark();
	}
}