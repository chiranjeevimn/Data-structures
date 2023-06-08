#include<stdio.h>
#include<string.h>
char revstr[30];

int main()
{
	char infix[30],prefix[30];
	printf("\nEnter the infix expression:\n");
	scanf("%s",infix);
	infix_prefix(infix,prefix);
	printf("\nPrefix expression :\n %s \n",prefix);
	return;
}

int F(char symbol)
{
	switch(symbol)
	{
		case '+': 
		case '-': return 1;
		case '*': 
		case '/': return 3;   
		case '^': 
		case '$': return 6;
		case '#': return -1;
		case ')': return 0;
		default: return 8;
	}
}

int G(char symbol)
{
	switch(symbol)
	{
		case '+': 
		case '-': return 2;
		case '*': 
		case '/': return 4;
		case '^':
		case '$': return 5;
		case '(': return 0;
		case ')': return 9;
		default: return 7;
	}
}

const char* str_rev(char str[])
{
	int i,j=0,l;
	l=strlen(str)-1;
	for(i=l;i>=0;i--)
	{
		revstr[j]=str[i];
		j++;
	}
	revstr[j]='\0';
	return revstr;
}


int infix_prefix(char infix[],char prefix[])
{
	int top,j,i;
	char s[30],symbol;
	top=-1;
	s[++top]='#';
	j=0;
	strcpy(infix,str_rev(infix));
	for(i=0;i<strlen(infix);i++)
	{
		symbol=infix[i];
		
		while(F(s[top])>G(symbol))
		{
			prefix[j]=s[top--];  
			j++;
		}
		if(F(s[top]!=G(symbol)))
			s[++top]=symbol;
		else
			top--;
	}
	
	while(s[top]!='#')
	{
		prefix[++j]=s[top--];
		
	}
	
	prefix[j]='\0'; 
	printf(prefix);
	strcpy(prefix,str_rev(prefix));
}


