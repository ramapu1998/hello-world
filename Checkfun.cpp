#include<stdio.h>
void check(int);
int a[20];

int main()
{
	int n;
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	check(n);
	return 0;
}

void check(int x)
{  
    int i;
    printf("Enter the elements:");
	for(i=0;i<x;i++)
	scanf("%d",&a[i]);
	for(i=0;i<x;i++)
	{
		if(a[i]==a[i+1]-1)
		  printf("Elemnts in array are consecutive");
		else
		  printf("Elements are not consecutive");
	      break;
	}
	
	
}

