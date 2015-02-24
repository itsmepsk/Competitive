#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,q,i,j,k,m,counter,counter1,counter2,flag,*arr;
    scanf("%d",&n);
    arr = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&k);
        counter = 0,flag = -1;
        for(j=0;j<n;j++)
        {
            if(arr[j] == k)
            {
            	counter1 = 0,counter2 = 0;
                for(m=j;k<=arr[m] && m >=flag+1;m--)
                {
                    counter1++;
                }
                for(m=j;k<=arr[m] && m <n;m++)
                {
                    counter2++;
                }
                counter = counter + (counter1)*(counter2);
                flag = j;
            }
        }
        printf("%d\n",counter);
    }
    return 0;
}
