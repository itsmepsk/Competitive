#include <stdio.h>
#include <math.h>

int main()
{
	int t,c;
	float p,s,len,hei,vol;
	scanf("%d",&t);
	for(c=0;c<t;c++)
	{
		scanf("%f %f",&p,&s);
		len = (p-sqrt(p*p-24*s))/12;
		hei = p/4 - 2*len;
		vol = len*len*hei;
		printf("%.2f\n",vol);
	}
	return 0;
}
