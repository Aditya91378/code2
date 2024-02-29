		class shape{
		public void draw(){
		System.out.println("This is a rectangle");
}

}
		class geometry extends shape{
		public void draw(){
				System.out.println("This is a square");
	}
		public void print(){
			super.draw();
	}
}

		class piece {
		public static void main(String args[]){
			geometry g =new geometry();
			g.draw();
			g.print();
}
}