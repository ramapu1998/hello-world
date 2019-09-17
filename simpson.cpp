#include<stdio.h>
#define f(x) (1/(1+(x)*(x)))
main()
{
	int i,n;
	float s1,s2,I,a,b,h,x,s3;
	printf("Enter the lower limit a and upper lomit b");
	scanf("%f%f",&a,&b);
	printf("Enter the No of sub intervals");
	scanf("%d",&n);
	h=(b-a)/n;
	s1=f(a)+f(b);
	s2=0;
	s3=0;
	for(i=1;i<=n-1;i++)
	{
		x=a+i*h;
		if(i%2==1)
		{
			s2=s2+f(x);
		}
		else
		{
			s3=s3+f(x);
		}
		I=(h/3)*(s1+4*s2+2*s3);
		printf("Result is %f",I);
		
	}
}
