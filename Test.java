class Test
{
  public static void main(String[] args)
  {
    Test t1=new Test();
    Test t2=new Test();
    Test t3=new Test();
    t3=t1;

    String s1 = new String("GEEKS"); 
    String s2 = new String("GEEKS"); 

    System.out.println(t1 == t3); 
    System.out.println(t1 == t2); 
  
    System.out.println(t1.equals(t2)); 
    System.out.println(s1.equals(s2)); 
  } 
}