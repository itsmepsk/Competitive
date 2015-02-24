#include <stdio.h>

int main()
{
	int n,i;
	while(1)
	{
		scanf("%d",&n);
		if(n == -1)
		{
			break;
		}
		else
		{
			int arr[n],sum = 0,counter = 0,average;
			for(i=0;i<n;i++)
			{
				scanf("%d",&arr[i]);
				sum = sum + arr[i];
			}
			if(sum%n == 0)
			{
				average = sum/n;
				for(i=0;i<n;i++)
				{
					if(arr[i] < average)
					{
						counter = counter + (average - arr[i]);
					}
				}
				printf("%d\n",counter);
			}
			else
			{
				printf("-1\n");
			}
		}
	}
	return 0;
}
