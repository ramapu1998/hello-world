#include <stdio.h>

void sort(int a[], int n);

int main()
{
	int n, i, b;
	
	printf("Enter the length: ");
	scanf("%d", &n);
	
	int a[n];
	
	printf("\nEnter elements: ");
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);

	
	sort(a,n);
}
	
	printf("\nIn sorted order: ");
	
	if (a[0] > a[1]) {
		b = a[0];
		a[0] = a[1];
		a[1] = b;
	}
	
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
}

void sort(int a[], int n)
{
	int i, max;
	
	max = a[0];
	
	for (i = 0; i < n; i++) {
		if (a[i] > max) { 
			max = a[i];
			a[i] = a[n - 1];
			a[n - 1] = max;		
		}
	}
	
	if (n > 0) {
		sort(a, n - 1);
	}
}

