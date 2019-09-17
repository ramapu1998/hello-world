#include<stdio.h>
#define MAX 10
void insert();
void Delete();
void display();
int cqueue[MAX];
int front=-1;
int rear=-1;

main()
{
	int choice;
	char ch;
	
	do
	{
		printf("1.insert\n");
		printf("2.delete\n");
		printf("3.display\n");
		printf("enter your choice");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:insert();
			break;
			
			case 2:Delete();
			break;
			
			case 3:display();
			break;
			
			default:printf("wrong choice");
		}
		printf("do you want to continue ");
		fflush(stdin);
		scanf("%c",&ch);
	}
	while(ch=='y');
}

void insert()
{
	int item;
	printf("enter the item");
	scanf("%d",&item);
	if((front==0&&rear==MAX-1)||(front==rear+1))
	{
	printf("queue is full");
    }
	else if (rear ==  - 1)
    {
        rear=0;
        front=0;
    }
    else if (rear ==MAX-1 && front > 0)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    cqueue[rear] = item;
	
}

void Delete()
{
	int item;
	if (front ==  - 1)
    {
        printf("Queue is empty ");
    }
    else if (front == rear)
    {
        printf("\n %d deleted", cqueue[front]);
        front =  - 1;
        rear =  - 1;
    }
    else
    {
        printf("\n %d deleted", cqueue[front]);
        front++;
    }
}

void display()
{
	int i;
	if(front==-1)
	printf("queue is empty");
	else
	{
		for(i=front;i<=rear;i++)
		printf("%d",cqueue[i]);
		
	}
	
	if(front>rear)
	{
		for(i=front;i<MAX;i++)
		{printf("%d",cqueue[i]);}
		for(i=0;i<rear;i++)
		{
			printf("%d",cqueue[i]);
		}
		
	}
}
