import java.util.*;
class Without
{
  public static void main(String args[])
  {
    int row,col;
    System.out.println("Enter the no. of rows:");
    Scanner sc=new Scanner(System.in);
    row=sc.nextInt();
    int[][]a=new int[row][];
    for(int i=0;i<a.length;i++)
    {
      System.out.println("How many columns:");
      col=sc.nextInt();
      a[i]=new int[col];
      System.out.println("Enter the elements:");
      for(int j=0;j<a[i].length;j++)
      {
        a[i][j]=sc.nextInt();
      }
    }
    
    System.out.println("Jagged Array:");
    for(int i=0;i<a.length;i++)
    {
      for(int j=0;j<a[i].length;j++)
      {
        System.out.print(a[i][j]);
      }
      System.out.println("  ");
    }
  }
}
    
