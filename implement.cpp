#include<stdio.h>
#include<malloc.h>
void push();
void pop();
void display();

struct node
{
	int info;
	struct node *next;
}*top=NULL;

main()
{
	int choice;
	char ch;
	do
	{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.display\n");
		printf("enter your choice");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:push();
			break;
			
			case 2:pop();
			break;
			
			case 3:display();
			break;
			
			default:printf("wrong choice");
		}
		printf("do you want to continue(type y or n)");
		fflush(stdin);
		scanf("%c",&ch);
	}
	while(ch=='y');
}

void push()
{
	int item;
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	printf("enter the item");
	scanf("%d",&item);
	p->info=item;
	p->next=NULL;
	if(top==NULL)
	top=p;
	else
	{
		p->next=top;
		top=p;
	}
}

void pop()
{
	struct node *temp;
	if(top==NULL)
	printf("stack is empty");
	else
	{
		temp=top;
		printf("popped item is %d",temp->info);
		top=top->next;
		free(temp);
	}
	
}

void display()
{
	struct node *temp;
	if(top==NULL)
	printf("stack is empty");
	else
	{
		temp=top;
		while(temp!=NULL)
		{
			printf("%d",temp->info);
			temp=temp->next;
		}
	}
}
