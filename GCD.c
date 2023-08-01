#include<stdio.h>
int gcd(int, int);
int main()
{
	int m,n,temp,lcm,c;
	printf("Enter the values of m and n :\n");
	scanf("%d %d",&m,&n);
	if(m<n)
	{
		temp=m;		
		m=n;
		n=temp;
	}
	c=gcd(m,n);
	lcm=m*n/c;
	printf("GCD of %d and %d is : %d\n",m,n,c);
	printf("LCM : %d",lcm);
}
int gcd(int m,int n)
{
	if(n==0)
		return m;
	else
		return gcd(n,m%n);
}
