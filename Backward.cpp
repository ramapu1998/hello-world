#include<stdio.h>
main()
{
	int i,j,n,d[10][10];
	float s,x[10],y[10],z,p,u,h;
	printf("Enetr the No elements");
	scanf("%d",&n);
	printf("Enter the elements of x array");
	for(i=0;i<n;i++)
	scanf("%f",&x[i]);
	printf("Enter the elements of y array");
	for(j=0;j<n;j++)
	scanf("%f",&y[j]);
	printf("Enter the value of z");
	scanf("%f",&z);
	for(i=0;i<=n-1;i++)
	{
		d[i][0]=y[i];
	}
	for(j=1;j<=n-1;j++)
	{
		for(i=0;i<=n-1-j;i++)
		{
			d[i][j]=d[i+1][j-1]-d[i][j-1];
		}
	}
	for(i=0;i<=n-1;i++)
	{
		printf("\n");
		for(j=0;j<=n-1-i;j++)
		printf("\t%d",d[i][j]);
    }
	h=x[1]-x[0];
	u=(z-x[n-1])/h;
	s=y[n-1];
	p=1;
	for(i=1;i<=n-1;i++)
	{
		p=p*(u+i-1)/i;
		s=s+p*d[i][n-i-1];
	}
	printf("\n Result is %f",s);
}
