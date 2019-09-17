#include<stdio.h.>
main()
{
	int i,j,n;
	float s,l[10],x[10],y[10],z;
	printf("Enter the No of elements");
	scanf("%d",&n);
	printf("Enetr the elements of x array");
	for(i=0;i<n;i++)
	scanf("%f",&x[i]);
	printf("\nEnetr the elements of y array");
	for(j=0;j<n;j++)
	scanf("%f",&y[j]);
	printf("\nEnter the value of z");
	scanf("%f",&z);
	for(i=0;i<n;i++)
	{
		l[i]=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			l[i]=l[i]*((z-x[j])/(x[i]-x[j]));
			
		}
	}
	s=0;
	for(i=0;i<n;i++)
	{
		s=s+l[i]*y[i];
	}
	printf(" Result is %f",s);
}
