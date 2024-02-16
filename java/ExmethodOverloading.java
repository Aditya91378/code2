class ExmethodOverloading{
  double rect(double l,double b){
  double area= l*b;
   return area;
}
float rect(float a,float b, float c){
  float result=a*b*c;
   return result;
}

public static void main(String args[]){
 ExmethodOverloading mo=new ExmethodOverloading();
  System.out.println("Area of rectangle is:" +mo.rect(30,40));
  System.out.println("multiply if a,b,c is:" +mo.rect(5.5f,6.7f,8.1f));
  }
}