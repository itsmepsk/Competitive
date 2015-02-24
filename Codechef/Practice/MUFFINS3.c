#include <stdio.h>

int main()
{
	int t,c,n,size;
	scanf("%d",&t);
	for(c=0;c<t;c++)
	{
		scanf("%d",&n);
		size = (n%2 == 0)?(n/2)+1:(n+1)/2;
		printf("%d\n",size);
	}
	return 0;
}
