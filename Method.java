class Method
{
  void disp(int i)
  {
     System.out.println(i);
  }
  int disp(float i)
  {
     System.out.println(i);
  }
}

class Imp
{
  public static void main(String[] args)
  {
  Method ob=new Method();
  ob.disp(2);
  ob.disp(3.1);
}
}