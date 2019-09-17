#include<stdio.h>
#include<math.h>
#define f(x) ((x*x*x)-4*x-9)
main()
{
	int n,i;
	float a,b,c,e;
	printf("Enter the value of a,b,e");
	scanf("%f%f%f",&a,&b,&e);
	printf("enter the value of n");
	scanf("%d",&n);
	if(f(a)*f(b)>0)
	{
		printf("There is no root avilable in the given interval");
	}
	else
	{
		printf("\nIteration\ta \t       b  \t       c  \t     f(c)\n");
		for(i=1;i<=n;i++)
		{
			c=(a*f(b)-b*f(a))/(f(b)-f(a));
			printf("\n   %d   \t    %f\t    %f\t    %f\t   %f\n",i,a,b,c,f(c));
			if(fabs(f(c))<e)
			{
				printf("\nroot is %f",c);
				break;
			}
			if(f(a)*f(c)>0)
			a=c;
			else
			b-c;
		}
	}
}
