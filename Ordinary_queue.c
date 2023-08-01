#include<stdio.h>
#include<stdlib.h>
int rear=-1,front=0;
void insert(int q[],int n)
{
	if(rear==(n-1))
	{
		printf("\nQueue is full\n");
		return;
	}
	printf("\nEnter the queue element: ");
	scanf("%d",&q[++rear]);
}
void delete(int q[])
{
	if(front>rear)
	{
		printf("\nQueue is empty!!\n");
		return;
	}
	if(front==rear)
	{
		printf("\nThe element deleted from queue is %d\n",q[front]);
		front=0;
		rear=-1;
		return;
	}
	printf("\nThe element deleted from queue is %d\n",q[front++]);
}
void display(int q[])
{
	int i;
	if(front > rear)
	{
		printf("\nQueue empty!!\n");
		return;
	}
	printf("\nThe elements in queue are\n");
	for(i=front;i<=rear;i++)
		printf("%d\t",q[i]);
	printf("\n");
}

int main()
{
	int q[20],n,ch;
	printf("\nEnter the size of queue");
	scanf("%d",&n);
	while(1)
	{
		printf("\n-------QUEUE-----\n\n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("Enter your choice :\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert(q,n);
			        break;
			case 2: delete(q);
			        break;
			case 3: display(q);
			        break;
			case 4: exit(0);
			        break;
			default: printf("\n Wrong choice!!!\n");
		}
	}
	return;
}
