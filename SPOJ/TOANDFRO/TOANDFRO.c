#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	while(1)
	{
		char mes[210],temp[10],current,now;
		int l,n,m,i,j,k=0;
		scanf("%d",&n);
		gets(temp);
		if(n != 0)
		{
			j = 0;
			gets(mes);
			l = strlen(mes);
			m = l/n;
			char arr[m][n];
			for(i=0;i<l;i++)
			{
				current = mes[i];
				arr[k][j] = mes[i];
				if(k%2 == 0)
				{
					j++;
				}
				else
				{
					j--;
				}
				
				if((i+1)%n == 0)
				{
					if(k%2 == 0)
					{
						j = n-1;
						k++;
					}
					else
					{
						j = 0;
						k++;
					}
				}
			}
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					printf("%c",arr[j][i]);
				}
			}
			printf("\n");
		}
		else
		{
			break;
		}
	}
	return 0;
}
