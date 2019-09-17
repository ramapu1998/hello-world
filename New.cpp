
#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,n,s=0,count=0,count1=0,d=0;
	float x[1000000],a,b,c;
	printf("enter the nunber:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(n%i==0)
		{
			x[s]=float(i);
			s++;
		}
	}
	printf("the number is divisible by");
	for(i=0;i<=s;i++)
	{
		printf("%f",x[i]);
	}
	for(i=0;i<=s;i++)
	{
		a=x[i];
		if(a==1 && a==s)
		{
			count=0;
		}
		else
		{
			
			b=sqrt(a);
			c=(b)*(b);
			if(c==x[i])
			{
				count1++;
			}
		}
		
	}
	d=s-count1;
	printf("the square free number is %d",d);
}

