#include <stdio.h>
#include <math.h>


int main()
{
	long long int t,c,n,m,i,j,b,pro;
	scanf("%lld",&t);
	for(c=0;c<t;c++)
	{
		long long arr[100125] = {0};
		scanf("%lld %lld",&m,&n);
		if(m<=2)
		{
			i = 3;
		}
		else
		{
			i = m;
		}
		for(;i<=n;i++)
		{
			if(i%2 == 0)
			{
				b = i-m+1;
				arr[b] = 1;
			}
		}
		for(i=3;i*i<=n;i=i+2)
		{
			if(i<m)
			{
				j = (((m-1)/i)+1)*i;
			}
			else
			{
				j = i*i;
			}
			for(;j<=n;j=j+i)
			{
				arr[j-m+1] = 1;
			}
		}
		for(i=m;i<=n;i++)
		{
			if(arr[i-m+1] == 0)
			{
				if(i!=1)
				printf("%lld,",i);
			}
		}
		printf("\n");
	}
	return 0;
}
