#include<stdio.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push(int);
void pop();
void display();

main()
{
	int item,choice;
	char c;
	do
	{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.display\n");
		printf("enter your choice");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:printf("enter the item");
			scanf("%d",&item);
			push(item);
			break;
			
			case 2:pop();
			break;
			
			case 3:display();
			break;
			
			default:printf("wrong choice");
			
		}
		printf("do you want to continue(type y or n)");
		fflush(stdin);
		scanf("%c",&c);
	}
	while(c=='y');	
}

void push(int item)
{
	if(top==MAX-1)
	printf("stack is full");
	else
	{
		top=top+1;
		stack[top]=item;
	}
}

void pop()
{int item;
	if(top==-1)
	printf("stack is empty");
	else
	{
		item=stack[top];
		top=top-1;
	}
}

void display()
{
	int i;
	if(top==-1)
	printf("stack is empty");
	else
	{
		for(i=top;i>=0;i--)
		printf("%d",stack[i]);
	}
}


