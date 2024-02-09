/* labelledContinue.java*/
 class labelledContinue
{
    public static void main (String args[]){
		FirstForloop:
	// The  loop iterates two times for i=1 and 3
		for (int i=1; i<4; ++i){
			// The  loop iterates thrice for j=1 and 3
				for (int j=1; j<4; ++j){
			if(i==2)
			{
				continue FirstForloop;
		}
			System.out.println("i= "+i+"; j=" +j );
}
}
}
}