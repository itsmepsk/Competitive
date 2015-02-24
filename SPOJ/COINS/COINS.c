#include <stdio.h>
#include <math.h>

int arr[1000006];

unsigned long long int check(unsigned long long int n)
{
	if(n <= 1000000)
	{
		return(arr[n]);
	}
	else
	{
		return(check(n/2) + check(n/3) + check(n/4));
	}
}

int main()
{
	unsigned long long int n,temp;
	unsigned long long int m,i,j,a,b,c,c1,c2,c3;
	for(i=0;i<=11;i++)
	{
		arr[i] = i;
	}
	
	for(i=12;i<=1000000;i++)
	{
		a = i/2;
		b = i/3;
		c = i/4;
		c1 = arr[a];
		c2 = arr[b];
		c3 = arr[c];
		if(arr[a] > a)
		{
			a = arr[a];
		}
		if(arr[b]  > b)
		{
			b = arr[b];
		}
		if(arr[c] > c)
		{
			c = arr[c];
		}
		arr[i] = a+b+c;
	}
	
	while(scanf("%llu",&n) != EOF)
	{
		if(n<=11)
		{
			temp = n;
		}
		else
		{
			temp = check(n);
		}
		printf("%llu\n",temp);
	}
	return 0;
}
