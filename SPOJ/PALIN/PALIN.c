#include <stdio.h>
#include <stdlib.h>
int main()
{
	int t,c,l,m,i,j,now;
	long long int k,temp;
	scanf("%d",&t);
	for(c=0;c<t;c++)
	{
		int flag = 0,limit = 0;
		l = 0,i = 0;
		scanf("%lld",&k);
		temp = k;
		while(temp != 0)
		{
			l++;
			temp = temp/10;
		}
		temp = k;
		int count = 0;
		int *arr = (int *)malloc((l+1)*sizeof(int));
		int *brr = (int *)malloc((l+1)*sizeof(int));
		arr[0] = 0;
		while(temp != 0)
		{
			arr[l-i] = temp%10;
			now = arr[l-i];
			temp = temp/10;
			//brr[i] = 0;
			i++;
		}
		for(i=0;i<l+10;i++)
		{
			brr[i] = 0;
		}
		m = (l%2 == 0)?(l/2):((l/2)+1);
		for(i=1;i<=m;i++)
		{
			if(i == m || count == m)
			{
				if(flag == 0)
				{
					if(arr[i] > arr[l-i+1])
					{
						arr[l-i+1] = arr[i];
					}
					else
					if(arr[i] <= arr[l-i+1] && arr[i] != 9)
					{
						arr[i] = arr[i] + 1;
						arr[l-i+1] = arr[i];
					}
					else
					if(arr[i] == arr[l-i+1] && arr[i] == 9)
					{
						brr[i] = 1;
						int p,carry = 0;
						for(i=l;i>=0;i--)
						{
							temp = arr[i] + brr[i] + carry;
							arr[i] = (arr[i] + brr[i] + carry)%10;
							carry = temp/10;
						}
						if(arr[0] == 0)
						{
							i = 1;
						}
						else
						{
							i = 0;
						}
						if(i == 0)
						{
							p = 0;
						}
						else
						{
							p = 1;
						}
						for(;i<=m;i++)
						{
							arr[l-i+p] = arr[i];
						}
					}
				}
				else
				{
					arr[l-i+1] = arr[i];
				}
			}
			else
			if(arr[i] == arr[l-i+1])
			{
				count++;
			}
			else
			if(arr[i] < arr[l-i+1])
			{
				arr[l-i+1] = arr[i];
				flag = 0;
			}
			else
			if(arr[i] > arr[l-i+1])
			{
				arr[l-i+1] = arr[i];
				flag = 1;
			}
		}
		if(arr[0] != 0)
		{
			i = 0;
		}
		else
		{
			i = 1;
		}
		for(;i<=l;i++)
		{
			printf("%d",arr[i]);
		}
		printf("\n");
	}
	return 0;
}
