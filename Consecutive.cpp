#include<stdio.h>
main()
{
	int a[30],n,i;
	printf("Enter the no of elemnets:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i+1]-1)
		  printf("Elemnts in array are consecutive");
		else
		  printf("Elements are not consecutive");
	
		  break;
	}
	
}
