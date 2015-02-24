#include <stdio.h>

int main()
{
	int m,n,i,j,q,k,counter;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d",&k);
		counter = 0;
		int flag = -1;
		for(j=0;j<n;j++)
		{
			if(arr[j] == k)
			{
				int counter1 = 0,counter2 = 0;
				for(m=j;arr[m] >= k && m >= flag+1;m--)
				{
					counter1++;
				}
				for(m=j;arr[m] >= k && m<n;m++)
				{
					counter2++;
				}
				counter = counter + counter1*counter2;
				flag = j;
			}
		}
		printf("%d\n",counter);
	}
}
