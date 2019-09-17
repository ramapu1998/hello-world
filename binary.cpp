#include<stdio.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push(int);
int pop();

main()
{
	int num,d,bin=0;
	printf("enter the decimal number");
	scanf("%d",&num);
	while(num>0)
	{
		d=num%2;
		push(d);
		num=num/2;
	}
	while(top!=-1)
	{
		d=pop();
		bin=bin*10+d;
	}
	printf("%d",bin);
}

void push(int d)
{
top=top+1;
stack[top]=d;	
}

int pop()
{
int num;
num=stack[top];
top=top-1;
return num;
}
