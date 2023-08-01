#include<stdio.h>
#include<stdlib.h>
int count=0,front=0,rear=-1;
int insert(int q[],int n)
{
	if(count==n)
	{
		printf("Queue is full");
		return;
	}
	rear=(rear+1)%n;
	printf("Enter the element to queue:");
	scanf("%d",&q[rear]);
	count++;
}
int delete(int q[],int n)
{
	if(count==0)
	{
		printf("Queue is empty");
		return;
	}
	printf("The deleted element is %d\n",q[front]);
	front=(front+1)%n;
	count--;
}
int display(int q[],int n)
{
	int i,f;
	if(count==0)
	{
		printf("Queue is empty");
		return;
	}
	f=front;
	printf("The elements in queue are :\n");
	for(i=1;i<=count;i++)
	{
		printf("%d\t",q[f]);
		f=(f+1)%n;
	}
	printf("\n");
}
int main()
{
	int ch,*q,n;
	printf("enter the size of circular queue");
	scanf("%d",&n);
	q=(int*)malloc(n*sizeof(int));
	while(1)
	{
		printf("\n***CIRCULAR QUEUE***\n");
		printf("1.INSERT\n");
		printf("1.DELETE\n");
		printf("1.DISPLAY\n");
		printf("1.EXIT\n");
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert(q,n);
				break;
			case 2:delete(q,n);
				break;
			case 3:display(q,n);
				break;
			case 4:exit(0);
				break;
			default:printf("INVALID CHOICE\n");
		}
	}
	return;
}






















