class Default
{
  public static void main(String args[])
  {
    String a[][]=new String[][]{{"a","b"},{"c"},{"a","b","c"}};
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