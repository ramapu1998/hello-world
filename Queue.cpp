#define MAX 10
include<stdio.h>

int Queue[MAX];
int Front=-1;
int Rear=-1;
void  insert();
void Delete();
void display();

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
			case 1:insert();
			break;
			
			case 2:Delete();
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

void insert()
{
	int item;
	printf("enter the data");
	scanf("%d",&item);
	if(Rear==MAX-1)
	printf("Queue overflow");
	else
	{
		if(Front==-1)
		Front=0;
		Rear=Rear+1;
		Queue[Rear]=item;
	}
}

void Delete()
{
	int item;
	if(Front==-1)
	printf("Queue is empty");
	else
	{
		item=Queue[Front];
		Front=Front+1;
		printf("item deleted=%d",item);
	}
}

void display()
{
	int i;
	if(Front==-1||Front>Rear)
	printf("Queue is empty");
	else
	{
		for(i=Front;i<=Rear;i++)
		printf("%d",Queue[i]);
	}
}


