#include <stdio.h>

int main()
{
	int n,i,j,count = 0,counter = 0;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j*j<=i;j++)
		{
			if(i%j == 0)
			{
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
}
