#include <stdio.h>

int main()
{
	unsigned long long int n,sum,i;
	while(1)
	{
		scanf("%llu",&n);
		if(n == -1)
		{
			break;
		}
		else
		{
			sum = 0,i = 0;
			while((n-1) > sum && (n-1) != sum)
			{
				sum = sum + 6*i;
				i++;
			}
			if(sum == n-1)
			{
				printf("Y\n");
			}
			else
			{
				printf("N\n");
			}
		}
	}
	return 0;
}
