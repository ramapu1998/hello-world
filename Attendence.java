import java.util.*;
class Attendence
{   
    int count=0,i,j;
	void checkName(int n,String [] first,String [] last)
	{
       for(int i=0;i<n;i++)
	   {     
            for(int j=0;j<n;j++)
		    {
		        if(i!=j)
		        {
		            if(first[i].compareTo(first[j]) == 0)
		            {
		                count++;
		                System.out.println(first[i]+" "+last[i]);
		                break;
		            }
		        }
		        
		    }
            if(count==0)
		    {
		        System.out.println(first[i]);
		    }
		    else
		        count=0;
	    }
	}
}

class Implement
{
	public static void main(String[] args)
	{  
	   Scanner sc=new Scanner(System.in);
       int test=sc.nextInt();
       while(test-->0)
	   {
		    
		    int n=sc.nextInt();
		    String[] first=new String[n];
		    String[] last=new String[n];
		    for(int i=0;i<n;i++)
		    {
		        first[i]=sc.next();

		        last[i]=sc.next();
		    }
		    Attendence obj=new Attendence();
		    obj.checkName(n,first,last);
	    }    
	}
}