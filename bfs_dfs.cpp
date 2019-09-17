#include<stdio.h>
#include<stdlib.h>
#define MAX 20

typedef enum boolean{False,True} Bool;
int adj[MAX][MAX];
Bool visited[MAX];
int n;

void create_graph()
{
	int i,max_edges,origin,dest;

	printf("Enter number of nodes : ");
	scanf("%d",&n);
	max_edges=n*(n-1);

	for(i=1;i<=max_edges;i++)
	{
		printf("Enter edge %d( 0 0 to quit ) : ",i);
		scanf("%d %d",&origin,&dest);

		if((origin==0) && (dest==0))
			break;

		if( origin > n || dest > n || origin<=0 || dest<=0)
		{
			printf("Invalid edge!\n");
			i--;
		}
		else
		{
			adj[origin][dest]=1;
		}
	}
}

 
void bfs(int v)
{
	int i,front,rear;
	int que[20];
	front=rear= -1;

	printf("%d ",v);
	visited[v]=True;
	rear++;
	front++;
	que[rear]=v;

	while(front<=rear)
	{
		v=que[front];
		front++;
		for(i=1;i<=n;i++)
		{
			if( adj[v][i]==1 && visited[i]==False)
			{
				printf("%d ",i);
				visited[i]=True;
				rear++;
				que[rear]=i;
			 }
		}
	}
	printf("\n");
}

void dfs(int v)
{
	int i,stack[MAX],top=-1,pop_v;
	top++;
	stack[top]=v;
	while (top>=0)
	{
		pop_v=stack[top];
		top--;                     
		if( visited[pop_v]==False)
		{
			printf("%d ",pop_v);
			visited[pop_v]=True;
		}
		else
			continue;

		for(i=n;i>=1;i--)
		{
			if( adj[pop_v][i]==1 && visited[i]==False)
			{
				top++;    
				stack[top]=i;
			}
		}
	}
	printf("\n");
}


 main()
{
	int i,v,choice;
	printf("\n\tTraversing of a graph through BFS and DFS\n");
	printf("\t*******************************************\n\n");
	create_graph();
	while(1)
	{
		printf("\n");
		printf("1. Breadth First Search using queue\n");
		printf("2. Depth First Search using stack\n");
		printf("3. Exit\n");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
     	printf("\n");
		switch(choice)
		{
		
		 case 1:
			printf("Enter start node for Breadth First Search (using queue): ");
			scanf("%d", &v);
			for(i=1;i<=n;i++)
				visited[i]=False;
			bfs(v);
			break;
		 case 2:
			printf("Enter start node for Depth First Search (using stack):  ");
			scanf("%d",&v);
			for(i=1;i<=n;i++)
				visited[i]=False;
			dfs(v);
			break;

		 case 3:
			exit(1);
			break;
		 default:
			printf("Wrong choice\n");
		 }
	}
}

