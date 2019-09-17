#include<stdio.h>
#include<math.h>
#define f(x) ((x*x*x)-25)
#define df(x) (3*x*x)
main()
{
	int n,i;
	float x0,x1,e;
	printf("Enter the value of x0,e");
	scanf("%f%f",&x0,&e);
	printf("Enter the No of Iteration n");
	scanf("%d",&n);
	printf("\n Iteration \t x0 \t     x1 \t  f(x1)\n");
	for(i=1;i<=n;i++)
	{
		x1=x0-(f(x0)/df(x0));
		printf("\n     %d\t      %f\t   %f\t%f\n",i,x0,x1,f(x1));
		if(fabs(f(x1))<e)
		{
			printf("\n Root is %f",x1);
			break;
		}
		x0=x1;
	}
}
