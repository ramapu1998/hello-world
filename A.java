class A
{
  public int i=1;
}
class B extends A
{
  public A(int i)
  {
    i=i;
  }
  public static void main(String[] args)
  {
     A ob=new A(5);
     System.out.println(ob.i);
  }
}