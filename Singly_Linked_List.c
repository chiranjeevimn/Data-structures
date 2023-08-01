#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};

typedef struct node *NODE;

NODE getnode()
{
	return ((struct node*) malloc(sizeof(struct node*)));
}

NODE insert_front(int item,NODE first)
{
	NODE temp;
	temp = getnode();
	temp->info = item;
	temp->link = first;
	return temp;
}

NODE delete_front(NODE first)
{
	NODE temp;
	if(first==NULL)
	{
		printf("\nList is empty\n");
		return first;
	}
	temp=first;
	temp=temp->link;
	printf("\nThe deleted element in the list is %d\n",first->info);
	free(first);
	return temp;
}

void display(NODE first)
{
	NODE temp;
	if(first==NULL)
	{
		printf("\nList is empty!!\n");
		return;
	}
	temp=first;
	printf("\n The elements of the list are :\n");
	while(temp!=NULL)
	{
		printf("%d--->",temp->info);
		temp=temp->link;
	}
	printf("NULL\n");
}

int main()
{
	int ch,item;
	NODE first=NULL;
	while(1)
	{
		printf("\n***************Single linked list*********************\n\n");
		printf("\n1. Insert front");
		printf("\n2. Delete");
		printf("\n3. Display");
		printf("\n4. Exit\n");
		printf("\nEnter your choice :\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\nEnter element to the list: ");
				scanf("%d",&item);
				first = insert_front(item,first);
				break;
			case 2: first=delete_front(first);
				break;
			case 3: display(first);
				break;
			case 4: exit(0);
				break;
			default: printf("\n Wrong choice\n");
		}
	}
	return;
}
