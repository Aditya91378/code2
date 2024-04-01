	class PrintDemo extends Thread {
		public void  printCount(){
	try{
		for (int i=5;i>0 ; i--){
		System.out.println ("Counter ---"+i);
		}
	}
	catch (Exception e){
		System.out.println("Thread"+ Thread.currentThread().getName()+"interrupted");
		}
	}
	public void run(){
		synchronized(this){
	printCount();
		}
	System.out.println("thread"+Thread.currentThread().getName()+"exiting" );
		
	}
}
	public class TestThread{
		public static void main(String args[]){
		PrintDemo PD =new PrintDemo();
		Thread t1=new Thread(PD);
		Thread t2=new Thread(PD);
			t1.start();
			t2.start();
			try{
		t1.join();
		t2.join();
			}
		catch(Exception e){
		System.out.println("Interrupted");
			}
		}
	}


