#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main()
{
	while(1)
	{
		int n;
		float area;
		scanf("%d",&n);
		if(n == 0)
		{
			break;
		}
		else
		{
			area = (n*n)/(2*PI);
			printf("%.2f\n",area);
		}
	}
	return 0;
}
