#include <stdio.h>

int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int t,c,n,i,j;
	int arr[110][110];
	scanf("%d",&t);
	for(c=0;c<t;c++)
	{
		int maxi = -1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			for(j=0;j<=i;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		for(i=1;i<n;i++)
		{
			for(j=0;j<=i;j++)
			{
				arr[i][j] = arr[i][j] + max(arr[i-1][j-1],arr[i-1][j]);
			}
		}
		for(i=0;i<n;i++)
		{
			if(arr[n-1][i] > maxi)
			{
				maxi = arr[n-1][i];
			}
		}
		printf("%d\n",maxi);
	}
	return 0;
}
