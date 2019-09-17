class Within
{
  public static void main(String args[])
  {
    String [][]a=new String[3][];
    a[0]=new String[]{"a","b"};
    a[1]=new String[]{"c"};
    a[2]=new String[]{"d","e","f"};
    for(int i=0;i<a.length;i++)
    {
      for(int j=0;j<a[i].length;j++)
      {
        System.out.print(a[i][j]);
      }
      
      System.out.println(" ");
    }
  }
}