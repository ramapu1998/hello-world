import java.util.Scanner;

class Array
{
  static void findElements(int arr[], int n)  
  {  
 
    for (int i = 1; i < n - 1; i++) 
    {  
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])  
            System.out.println(+arr[i]);  
    } 
  }
 
  public static void main(String args[])
  {     
        int n;

        Scanner s = new Scanner(System.in);

        System.out.println("Enter no. of elements you want in array:");

        n = s.nextInt();

        int arr[] = new int[n];

        System.out.println("Enter all the elements:");

        for(int i = 0; i < n; i++)

        {

            arr[i] = s.nextInt();

        } 
        
        findElements(arr,n);
   }
}