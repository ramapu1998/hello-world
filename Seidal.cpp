#include<stdio.h>
#include<math.h>
main()
{
	int i,j,n;
	float x[10],a[10][10],big,s,temp,e,error;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value of e");
	scanf("%f",&e);
	printf("Enter the array elements");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		x[i]=0;
	}
	do
	{
		big=0;
		for(i=1;i<=n;i++)
		{
			s=0;
			for(j=1;j<=n;j++)
			{
				if(i!=j)
				{
					s=s+a[i][j]*x[j];
				}
			}
			temp=(a[i][n+1]-s)/a[i][i];
			error=fabs(temp-x[i]);
			if(error>big)
			{
				big=error;
			}
			x[i]=temp;
		}
		
	}
	while(big>=e);
	for(i=1;i<=n;i++)
	{
		printf("x[%d]=%f\n",i,x[i]);
	}
}
