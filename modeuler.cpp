#include<stdio.h>
#define f(x,y) (((x)*(x))+(y))
main()
{
	float h,x0,y0,z,x1,y1,f1,f2,f3;
	printf("Enter the value of x0,y0,h,z");
	scanf("%f%f%f%f",&x0,&y0,&h,&z);
	while(x0<z)
	{
		x1=x0+h;
		f1=f(x0,y0);
		f2=y0+h*f1;
		f3=f(x1,f2);
		y1=y0+(h/2)*(f1+f3);
		printf("\n%f  %f",x1,y1);
		x0=x1;
		y0=y1;
	}
}
