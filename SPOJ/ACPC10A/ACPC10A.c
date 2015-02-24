#include <stdio.h>

int main()
{
	while(1)
	{
		int a,b,c,d;
		scanf("%d %d %d",&a,&b,&c);
		if(a == 0 && b == 0 && c == 0)
		{
			break;
		}
		else
		{
			if(c - b == b - a)
			{
				d = b - a;
				printf("AP %d\n",c + d);
			}
			else
			{
				d = b/a;
				printf("GP %d\n",c*d);
			}
		}
	}
	return 0;
}
