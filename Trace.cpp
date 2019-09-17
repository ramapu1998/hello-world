#include<stdio.h>
int main()
{
	int t,n,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int trace=0;
	    for(i=0;i<n;i++)
	    {
	        
	        int k=i,sum=0;
	        for(j=0;j<n&&k<n;j++)
	        {
	            sum+=a[k][j];
	            k++;
	        }
	        if(sum>trace)
	        trace=sum;
	    }
	    for(j=0;j<n;j++)
	    {
	        
	        int k=j,sum=0;
	        for(i=0;i<n&&k<n;i++)
	        {
	            sum+=a[i][k];
	            k++;
	        }
	        if(sum>trace)
	        trace=sum;
	    }
	    printf("%d\n",trace);
	}
}
