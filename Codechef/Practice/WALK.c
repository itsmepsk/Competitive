#include <stdio.h>

int main()
{
	long long int t,c,n,i,arr[100050];
	scanf("%lld",&t);
	for(c=0;c<t;c++)
	{
		long long int max1 = 0,max2 = 0,index1,index2,vel;
		scanf("%lld",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%lld",&arr[i]);
		}
		for(i=1;i<=n;i++)
		{
			if(arr[i] >= max1)
			{
				max1 = arr[i];
				index1 = i;
			}
		}
		for(i=1;i<=n;i++)
		{
			if(arr[i] != max1)
			{
				if(arr[i] >= max2)
				{
					max2 = arr[i];
					index2 = i;
				}
			}
		}
		if(index1 > index2)
		{
			vel = max1 + index1 - 1;
		}
		else
		{
			vel = max1 + index1 + (index1 - index2) - (max1 - max2) - 1;
		}
		printf("%lld\n",vel);
	}
	return 0;
}
