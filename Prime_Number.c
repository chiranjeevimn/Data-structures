#include<stdio.h>
int main()
{
 int i,flag,j,n,a[25];
 printf("Enter the size of array:\n");
 scanf("%d",&n);
 printf("Enter the elements to array:\n");
 for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
printf("The prime numbers in array are:\n");
 for(i=0;i<n;i++)
 { 
   flag=0;
   for(j=2;j<a[i];j++)
   {
      if(a[i]%j==0)
      {
	flag=1;
	break;
       }
    }
  if(flag==0)
   printf("%d\n",a[i]);
  }
return;
}
