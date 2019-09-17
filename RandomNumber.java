import java.util.Scanner;
import java.util.Random;

class RandomNumber
{
  static void findElements(int arr[], int n)  
  {  
 
    for (int i = 1; i < n - 1; i++) 
    {  
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) 
            System.out.println("Result is:"); 
            System.out.println(+arr[i]);  
    } 
  }
 
  public static void main(String args[])
  {     
      Random rd = new Random();
      int[] arr = new int[20];
      for (int i = 0; i < 20; i++)
      {
         arr[i] = rd.nextInt(100); 
         System.out.println(arr[i]);
      }
    findElements(arr,20);
  }
}