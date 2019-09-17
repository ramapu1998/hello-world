#include<stdio.h>
#define f(x) (1/(1+(x)*(x)))
main()
{
	int i,n,m;
	float s=0,I,a,b,h,x;
	printf("Enter the lower limit a and upper lomit b");
	scanf("%f%f",&a,&b);
	printf("Enter the No of sub intervals");
	scanf("%d",&n);
	h=(b-a)/n;
	m=n/6;
	for(i=1;i<=m;i++)
	{
		s=s+f(a)+5*f(a+h)+f(a+2*h)+6*f(a+3*h)+f(a+4*h)+5*f(a+5*h)+f(a+6*h);
		a=a+6*h;
	}
	I=((3*h)/10)*s;
	printf("Result is %f",I);
}
