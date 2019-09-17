import java.util.*;
class Sphare
{
 
    double l,b,h,vol;

  Sphare()
  {
    l=10;
    b=10;
    h=10;
  }


  Sphare(double ln, double br, double hi)
  {
    this.l=ln;
    this.b=br;
    this.h=hi;
  }

  void display()
  {
    vol=4/3*3.14*l*b*h;
    System.out.println("Volume is:"+vol);
  }
}

class SphareImp
{

  public static void main(String args[])
  {   
    Sphare c1 = new Sphare();
    c1.display();
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the radius of the sphare:");
    double x = sc.nextInt();
    Sphare c2 = new Sphare(x,x,x);
    c2.display();
      
  }
}