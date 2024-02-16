class sm{
 static String pet(String s1){
        return("I have a cat named" + s1);
    }
 static String pet(String n1,String n2){
        return("I have two dogs named" + n1 +"and" + n2);
    }
  static int pet(int num){
        return num+3; 
    }
   public static void main(String args[]){
   System.out.println(pet("whiskers"));
   System.out.println(pet("Prem","Sarvesh"));
   System.out.println("Total no of pets:"+pet(2));
  }
}