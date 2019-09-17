#include<stdio.h>
#include<malloc.h>
void Insert();
void Delete();
void Display();

struct Queue
{
	int info;
	struct Queue *next;
}*Front=NULL,*Rear=NULL;

main()
{
	int choice;
	char ch;
	do
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("enter your choice");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:Insert();
			break;
			
			case 2:Delete();
			break;
			
			case 3:Display();
			break;
			
			default:printf("wrong choice");
		}
		printf("do you want to continue(type y or n)");
		fflush(stdin);
		scanf("%c",&ch);
	}
	while(ch=='y');
}

void Insert()
{
	int item;
	struct Queue *p,*loc;
	p=(struct Queue*)malloc(sizeof(struct Queue));
	printf("enter the item");
	scanf("%d",&item);
	p->info=item;
	p->next=NULL;
	if(Front==NULL)
	{
		Rear=p;
		Front=p;
	}
	else
	{
		Rear->next=p;
		Rear=p;
	}
}

void Delete()
{
	struct Queue *ptr;
	if(Front==NULL)
	printf("Queue is empty");
	else
	{
		ptr=Front;
		Front=Front->next;
		printf("deleted element is %d",ptr->info);
		free(ptr);
	}
	
}

void Display()
{
	struct Queue *temp;
	if(Front==NULL)
	printf("Queue is empty");
	else
	{
		temp=Front;
		while(temp!=NULL)
		{
			printf("%d  ",temp->info);
			temp=temp->next;
		}
	}
}
