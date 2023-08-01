#include<stdio.h>


int binary(int a[],int low,int high,int key)
{
	int mid;
	mid=low+high/2;
	if(low>high)
		return -1;
	if(key==a[mid])
		return 1;
	else if(key<a[mid])
		return binary(a,low,mid-1,key);
	else if(key>a[mid])
		return binary(a,mid+1,high,key);
	else
		return -1;
}
int main()
{
	int n,a[10],flag,key,i;
	printf("Enter the size of array : \n");
	scanf("%d",&n);
	printf("Enter array elements in descending order :\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the key element :\n");
	scanf("%d",&key);
	flag=binary(a,0,n-1,key);
	if(flag==1)
		printf("The key element is found\n");
	else 
		printf("The key element is not found\n");
	return;
}		

