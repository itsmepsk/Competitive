#include <stdio.h>

int main()
{
	double n,sum,m;
	int i;
	while(1)
	{
		scanf("%lf",&n);
		if(n == 0.00)
		{
			break;
		}
		else
		{
			sum = 0;
			for(i=1;sum<n;i++)
			{
				m = 1.00/(i+1);
				sum = sum + m;
			}
			printf("%d card(s)\n",i-1);
		}
	}
	return 0;
}
