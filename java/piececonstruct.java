		class shape{
		
		shape(){
		System.out.println("This is a rectangle");
}
		shape(String name){		
	System.out.println("This is a rectangle "+name);
}

}
		class geometry extends shape{
		geometry(){
		super("ground");			
			
	
	}
		
}

		class piececonstruct {
		public static void main(String args[]){
			geometry g =new geometry();
}
}