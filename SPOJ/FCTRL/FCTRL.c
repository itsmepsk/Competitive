#include <stdio.h>
#include <math.h>
int main()
{
	long long int n,t,c,i,count,check;
	scanf("%lld",&t);
	for(c=0;c<t;c++)
	{
		i = 1,count = 0,check = 1;
		scanf("%lld",&n);
		while(check!=0)
		{
			check = n/pow(5,i);
			count = count + check;
			i++;
		}
		printf("%lld\n",count);
	}
	return 0;
}
