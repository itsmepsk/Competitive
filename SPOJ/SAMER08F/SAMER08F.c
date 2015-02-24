#include <stdio.h>

int main()
{
	int n,f;
	while(1)
	{
		scanf("%d",&n);
		if(n != 0)
		{
			f = n*(n+1)*(2*n+1)/6;
			printf("%d\n",f);
		}
		else
		{
			break;
		}
	}
	return 0;
}
