 class person{
		private String name ;

		private int age;
		public person (){
		name=" ";
		  age=0;
}
		public person(String name){
			this .name=name;
			age=0;
}
		public person(String name,int age){
			this .name= name;
			this.age= age;
}
		public String toString(){
		return name+""+age;
}
		
}
		class persondetails{
		public static void main(String args[]){
		person p1=new person();
		person p2=new person("Aditya");
		person p3=new person("Aditya",19);

		System.out.println(p1.toString());
		System.out.println(p2.toString());
		System.out.println(p3.toString());
		
}

}