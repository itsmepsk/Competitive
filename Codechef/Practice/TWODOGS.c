#include <stdio.h>
#include <stdlib.h>

int n,k,m,i,j,*arr,time,temp,mini = 1000000;
int brr[1000005] = {0};



int max(int a,int b)
{
	return (a>b?a:b);
}

int main()
{
    scanf("%d %d",&n,&k);
    arr = (int *)malloc((n+1)*sizeof(int));
    m = 0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=1;i<=n;i++)
    {
    	if(brr[arr[i]] == 0)
    	{
    		if(i <= (n+1)/2)
    		{
    			brr[arr[i]] = i;
    		}
    		else
    		{
    			brr[arr[i]] = n-i+1;
    		}	
    	}
    	else
    	{
    		/*
    		if(n-i < brr[arr[i]])
    		{
    			brr[arr[i]] = n-i+1;
    		}
    		*/
    		if(i <= (n+1)/2)
    		{
    			temp = i;
    		}
    		else
    		{
    			temp = n-i+1;
    		}
    		if(temp < brr[arr[i]])
    		{
    			brr[arr[i]] = temp;
    		}
    	}
    }
    
    for(i=1;i<=n;i++)
    {
    	if(brr[i] != 0 && brr[k-i] != 0 && arr[i] != k - arr[i])
    	{
    		time = max(brr[i],brr[k-i]);
    		if(time < mini)
			{
				mini = max(brr[i],brr[k-i]);
			}
    	}
    }
    
    if(mini == 1000000)
    {
    	printf("-1\n");
    }
    else
    {
    	printf("%d\n",mini);
    }
    return 0;
}
