#include <stdio.h>
#include <string.h>
int main()
{
	int t,c;
	char te[10];
	scanf("%d",&t);
	for(c=0;c<t;c++)
	{
		unsigned long long int k,ans;
		scanf("%llu",&k);
		ans = 192 + 250*(k-1);
		printf("%llu\n",ans);
	/*	int arr[100000] = {0},brr[100000] = {0},temp = 0,x,i,m,l;
		char k[100000];
		gets(k);
		l = strlen(k);
		for(i=0;i<l;i++)
		{
			arr[i] = k[l-i-1] - '0';
		}
		for(i=0;i<l;i++)
		{
			x = arr[i] * 250 + temp;
			temp = x/10;
			arr[i] = x%10;
		}
		while(temp != 0)
		{
			arr[i] = temp % 10;
			temp = temp/10;
			i++;
		}
		brr[0] = 8;
		brr[1] = 5;
		x = 0;
		m = i;
		for(i=0;i<m;i++)
		{
			if(arr[i] < brr[i])
			{
				temp = arr[i] - brr[i] + 10 + x;
				arr[i+1] = arr[i+1] - 1;
				arr[i] = temp %10;
				x = x/10;
			}
			else
			{
				temp = arr[i] - brr[i] + x;
				arr[i] = temp %10;
				x = x/10;
			}
		}
		for(i=m-1;i>=0;i--)
		{
			printf("%d",arr[i]);
		}
		printf("\n");
		*/
	}
	return 0;
}
