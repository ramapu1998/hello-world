import java.util.*;
class Cylinder
{
 
    double r,h,vol;

  Cylinder()
  {
    r=10;
    h=10;
  }


  Cylinder(double ra, double hi)
  {
    this.r=ra;
    this.h=hi;
  }

  void display()
  {
    vol=3.14*r*r*h;
    System.out.println("Volume is:"+vol);
  }
}

class CylinderImp
{

  public static void main(String args[])
  {   
    Cylinder c1 = new Cylinder();
    c1.display();
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the radius of the cylinder:");
    double x = sc.nextInt();
    System.out.println("Enter the height of the cylinder:");
    double y = sc.nextInt();
    Cylinder c2 = new Cylinder(x,y);
    c2.display();
      
  }
}