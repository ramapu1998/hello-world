import java.util.*;
class Cube
{
 
    float l,b,h,vol;

  Cube()
  {
    l=10;
    b=10;
    h=10;
  }


  Cube(float ln, float br, float hi)
  {
    this.l=ln;
    this.b=br;
    this.h=hi;
  }

  void display()
  {
    vol=l*b*h;
    System.out.println("Volume is:"+vol);
  }
}

class CubeImp
{

  public static void main(String args[])
  {   
    Cube c1 = new Cube();
    c1.display();
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the size of the cube:");
    float x = sc.nextInt();
    Cube c2 = new Cube(x,x,x);
    c2.display();
      
  }
}