
//Transform the Expression

#include <stdio.h>
#include <string.h>

int top = -1;
char a[405],b[405],ch[5],now;

void pop()
{
	printf("%c",b[top]);
	top--;
}

void push(char c)
{
	b[++top] = c;
}

int main()
{
	int t,c,i,l;
	scanf("%d",&t);
	gets(ch);
	for(c=0;c<t;c++)
	{
		top = -1;
		gets(a);
		l = strlen(a);
		for(i=0;i<l;i++)
		{
			now = a[i];
			if(a[i] == '(')
			{
				push(a[i]);
			}
			else
			if(a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/' || a[i] == '^')
			{
				if(a[i] == '+' || a[i] == '-')
				{
					while(b[top] == '*' || b[top] == '/' || b[top] == '^')
					{
						pop();
					}
					push(a[i]);
				}
				else
				{
					push(a[i]);
				}
			}
			else
			if(a[i] == ')')
			{
				while(b[top] != '(')
				{
					pop();
				}
				top--;
			}
			else
			{
				printf("%c",a[i]);
			}
			if(i == l-1)
			{
				while(top != -1)
				pop();
			}
		}
		printf("\n");
	}
	return 0;
}
