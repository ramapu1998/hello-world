#include<stdio.h>
 main()
{
    int n,a[10],i,item;
	printf("ener the no of elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the element you want to search");
	scanf("%d",&item);
	linear_search(a,n,item);
}

int linear_search(int a[],int n,int item)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			printf("the element found at posiion %d",i+1);
			break;
		}
	}
	if(i==n)
	printf("search unsuccessful");
	return 0;
}
