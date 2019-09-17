#include <stdio.h>

void sort(int a[],int n);

int main()
{
	int a[10], n,i,b;
	
	printf("Enter the length of the array: ");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for (i=0;i<n;i++) 
	{
		scanf("%d", &a[i]);
	}
	
	sort(a,n);
	printf("array in sorted order\n:");
	
	for (i=0;i<n;i++) 
	{
		printf("%d ",a[i]);
	}
	return 0;
}

void sort(int a[], int n)
{
	int i, max;
	
	max=a[0];
	
	for (i=0;i<n-1;i++) 
	{
		if(a[i]>max)
		{
		max=a[i];
		a[i]=a[n-1];
		a[n-1]=max;		
	    }
	}
	if(n>0)
	{
	sort(a,n-1);
    }
}
	   
	

