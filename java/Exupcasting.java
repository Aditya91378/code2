class Exupcasting{
 String name;
 void nature(){
 System.out.println("Animal"); 
 }
}
 class Fish extends Exupcasting{
 String color;
 void nature(){
System.out.println("Aquatic animal");
 }
}
public class sea{
 public static void main(String args[]){
 Exupcasting a = new Fish();
 a.name = "GoldFish";
 Fish f = new Fish();
 f.name = "Whale";
 f.color = "Blue";

System.out.println("Object.a");
System.out.println("Name :"+ a.name);
 a.nature ();
System.out.println("Object f");
System.out.println("Name :"+ f.name);
System.out.println("Color :"+ f.color);
f.nature();
  }
}

 