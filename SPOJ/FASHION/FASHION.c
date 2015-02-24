#include <stdio.h>
#include <string.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int *)a - *(int *)b );
}

int main()
{
	int t,c,n,i;
	scanf("%d",&t);
	for(c=0;c<t;c++)
	{
		scanf("%d",&n);
		int men[n],women[n],level = 0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&men[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&women[i]);
		}
		
		qsort(men, n, sizeof(int), cmpfunc);
		qsort(women, n, sizeof(int), cmpfunc);
		
		for(i=0;i<n;i++)
		{
			level = level + men[i]*women[i];
		}
		printf("%d\n",level);
	}
	return 0;
}
