#include <stdio.h>

int main()
{
	int t,c,x,y;
	scanf("%d",&t);
	for(c=0;c<t;c++)
	{
		scanf("%d %d",&x,&y);
		if((x-y) == 2 || (x-y) == 0)
		{
			if(x%2 == 0 && y%2 == 0)
			{
				printf("%d\n",x+y);
			}
			if(x%2 != 0 && y%2 != 0)
			{
				printf("%d\n",x+y-1);
			}
		}
		else
		{
			printf("No Number\n");
		}
	}
	return 0;
}
