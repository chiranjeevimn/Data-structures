#include<stdio.h>
#include<stdlib.h>
void push(int*,int);
void pop(int*,int);
void display(int*,int);
int top=-1;


int main()
{
 int *s,n,ch;
 printf("Enter the size of the stack:");
 scanf("%d",&n);
 s=(int*)malloc(n*sizeof(int));


 while(1)
 {
   printf("\n-----------STACK OPERATIONS--------------\n");
   printf("1.Push\n");
   printf("2.Pop\n");
   printf("3.Display\n");
   printf("4.Exit\n");
   printf("Enter your choice: ");
   scanf("%d\n",&ch);
   switch(ch)
   {
	case 1: push(s,n);
	        break;
	case 2: pop(s,n);
	        break;
	case 3: display(s,n);
	        break;
	case 4: exit(0);
	default : printf("Entered wrong choice:\n");
     }
   }
 return;
}


void push(int s[],int n)
{
 if(top==(n-1))
 {
	printf("\nThe stack is FULL!!!\n");
	return;
 }
 printf("Enter the element to stack:\n");
 scanf("%d\n",&s[++top]);
 return;
}


void pop(int s[],int n)
{
	if(top==-1)
	{
		printf("\nThe stack is empty!!!\n");
		return;
	}
	printf("The element deleted from stack is : %d\n",s[top--]);
	return;
	}


void display(int s[],int n)
{
        int i;	
	if(top==-1)
	{
		printf("\nStack empty\n");
		return;
	}
	printf("The stack elements are;\n");
	for(i=top;i>-1;i--)
		printf("%d\n",s[i]);
		return;
}
   
