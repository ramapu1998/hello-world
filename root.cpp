#include<stdio.h>
#include<math.h>
#define f(x) ((x*x*x)+x-1)
main()
{
	float a,b,c,e;
	int i=1;
	printf("Enter the value of a,b,e");
	scanf("%f%f%f",&a,&b,&e);
	if(f(a)*f(b)>0)
	printf("There is no root avilable in the given interval");
	else
	{
		printf("\n__________________________________________________________________\n");
        printf("\niteration\ta  \t   b\t     c");
		do
		{
			c=(a+b)/2;
			printf("\n   %d        %f   %f  %f ", i, a,b,f(c));
			i++;
			if(f(a)*f(c)>0)
			a=c;
			else
			b=c;
		}
		while(fabs(a-b)>e);
		printf("Root is %f",c);
	}
}
