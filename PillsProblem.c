#include <stdio.h>

void main()
{   int t;
    int y,m,d,pills;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d:%d:%d",&y,&m,&d);
	    if(m==4||m==6||m==9||m==11)
	    {
	        pills=(61-d)/2+1;
	    }
	    else if(m==2)
	    {
	        if(y%400==0||(y%100!=0&&y%4==0))
	        pills=(29-d)/2+1;
	        else
	        pills=(59-d)/2+1;
	    }
	    else
	    pills=(31-d)/2+1;
	    printf("%d\n",pills);
	}
}

