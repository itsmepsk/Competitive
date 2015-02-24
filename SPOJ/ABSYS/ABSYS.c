#include <stdio.h>
#include <string.h>

int main()
{
	int t,c;
	char temp[10];
	char k[100000];
	scanf("%d",&t);
	gets(temp);
	for(c=0;c<t;c++)
	{
		int one[100000] = {0},two[100000] = {0},three[100000] = {0};
		int i,j,l,m,a,b,c;
		gets(temp);
		gets(k);
		int count = 0;
		for(i=0;k[i] != ' ';i++)
		{
			if(k[i] == 'm')
			{
				one[0] = 99;
				count = 1;
			}
			if(count == 1)
			{
				continue;
			}
			else
			{
				one[i] = k[i] - '0';
			}
		}
		a = 0;
		if(one[0] != 99)
		for(j=0;j<i;j++)
		{
			a = a*10 + one[j];
		}
		m = i;
		i = 0;
		count = 0;
		for(j=m+3;k[j] != ' ';j++)
		{
			if(k[j] == 'm')
			{
				two[0] = 99;
				count = 1;
			}
			if(count == 1)
			{
				continue;
			}
			else
			{
				two[i++] = k[j]- '0';
			}
		}
		b = 0;
		m = j;
		if(two[0] != 99)
		for(j=0;j<i;j++)
		{
			b = b*10 + two[j];
		}
		i = 0;
		count = 0;
		for(l=m+3;k[l] != '\0';l++)
		{
			if(k[l] == 'm')
			{
				three[0] = 99;
				count = 1;
			}
			if(count == 1)
			{
				continue;
			}
			else
			{
				three[i++] = k[l] - '0';
			}
		}
		c = 0;
		if(three[0] != 99)
		for(j=0;j<i;j++)
		{
			c = c*10 + three[j];
		}
		
		if(one[0] == 99)
		{
			a = c - b;
		}
		if(two[0] == 99)
		{
			b = c - a;
		}
		if(three[0] == 99)
		{
			c = a + b;
		}
		printf("%d + %d = %d\n",a,b,c);
	}
	return 0;
}
