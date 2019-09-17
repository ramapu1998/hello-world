#include<stdio.h>
#define f(x,y) ((x)+(y))
main()
{
	float h,x0,y0,z,x1,y1;
	printf("Enter the value of x0,y0,h,z");
	scanf("%f%f%f%f",&x0,&y0,&h,&z);
	while(x0<z)
	{
		x1=x0+h;
		y1=y0+h*f(x0,y0);
		printf("\n%f  %f",x1,y1);
		x0=x1;
		y0=y1;
	}
}
