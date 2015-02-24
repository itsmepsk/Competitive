#include <stdio.h>

int main()
{
	unsigned long long int t,c,n,i,can,sum;
	scanf("%llu",&t);
	for(c=0;c<t;c++)
	{
		sum = 0;
		scanf("%llu",&n);
		for(i=0;i<n;i++)
		{
			scanf("%llu",&can);
			sum = sum + can%n;
		}
		if(sum%n == 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
