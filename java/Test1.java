class Test{
	interface javamarks{
void marks();

}
}
class result implements Test.javamarks{
		public void marks (){
		System.out.println("You have passed in java");
}
}
 class Test1{
	public static void main(String args[]){
	result r=new result();
	r.marks();
}
}