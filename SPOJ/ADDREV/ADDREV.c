#include <stdio.h>

long long int reverse(long long int p)
{
	long long int temp = 0;
	while(p != 0)
	{
		temp = temp*10 + p%10;
		p = p/10;
	}
	return temp;
}

int main()
{
	long long int t,c,m,n,t1,t2,t3,temp;
	scanf("%lld",&t);
	for(c=0;c<t;c++)
	{
		scanf("%lld %lld",&m,&n);
		t1 = reverse(m);
		t2 = reverse(n);
		t3 = t1 + t2;
		t3 = reverse(t3);
		printf("%lld\n",t3);
	}
	return 0;
}
