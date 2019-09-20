abstract class Figure
{
	double dim1,dim2;

	Figure(double a,double b)
	{
	   dim1=a;
	   dim2=b;
	}

	abstract double area();
}

class Rectangle extends Figure
{
	Rectangle(double a,double b)
	{
	   super(a,b);
	}

	double area()
	{
	   return dim1*dim2;
	}
}

class Triangle extends Figure
{
	Triangle(double a,double b)
	{
	   super(a,b);
	}

	double area()
	{
	   return 0.5*dim1*dim2;
	}
}

class FigureImp
{
  public static void main(String[] args)
{
  Figure r;
  r=new Rectangle(20,30);
  System.out.println("Area="+r.area());
  r=new Triangle(20,30);
  System.out.println("Area="+r.area());
}
} 
  