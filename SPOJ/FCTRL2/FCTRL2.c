#include <stdio.h>

int main()
{
	long long int arr[200] = {0},t,c,n,i,j,k,temp,m,x;
	scanf("%lld",&t);
	for(c=0;c<t;c++)
	{
		x = 0;
		scanf("%lld",&n);
		arr[0] = 1;
		m = 1;
		for(i=2;i<=n;i++)
		{
			temp = 0;
			k = 0;
			x = 0;
			while(k != m)
			{
				x = temp + arr[k]*i;
				arr[k] = x%10;
				temp = x/10;
				k++;
			}
			while(temp != 0)
			{
				arr[k++] = temp % 10;
				temp = temp/10;
			}
			m = k;
		}
		for(j=k-1;j>=0;j--)
		{
			printf("%lld",arr[j]);
		}
		printf("\n");
	}
	return 0;
}
