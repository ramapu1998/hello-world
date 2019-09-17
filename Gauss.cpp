#include<stdio.h>
main()
{
	int i,j,n,k;
	float a[5][5],x[10],s,r;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	for(k=0;k<=n-2;k++)
	{
		for(i=k+1;i<=n-1;i++)
		{
			r=a[i][k]/a[k][k];
			for(j=k;j<=n;j++)
			{
				a[i][j]=a[i][j]-r*a[k][j];
			}
		}
	}
	printf("Matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("%f  ",a[i][j]);
		}
		printf("\n");
	}
	x[n-1]=a[n-1][n]/a[n-1][n-1];
	for(i=n-2;i>=0;i--)
	{
		s=0; 
		for(j=i+1;j<=n-1;j++)
		{
			s=s+a[i][j]*x[j];
		}
		x[i]=(a[i][n]-s)/a[i][i];
	}
	for(i=0;i<=n-1;i++)
	{
		printf("x[%d]=%f\n",i,x[i]);
	}
}
