#include <stdio.h>
#include <math.h>

int main()
{
    int t,a,i;
    long int l,d,s,c,arr[4];
    unsigned long long int m,power;
    scanf("%d",&t);
    for(a=0;a<t;a++)
    {
        for(i=0;i<4;i++)
        {
            scanf("%ld",&arr[i]);
        }
        l = arr[0];
        d = arr[1];
        s = arr[2];
        c = arr[3];
        power = pow(c+1,d-1);
        m = s*(power);
        //p = m/c;

        for(i=0;i<4;i++)
        {
            printf("%ld\t",arr[i]);
        }
        printf("%ld %ld %ld %ld %llu\n",l,d,s,c,m);

        if(m >= l)
        {
            printf("ALIVE AND KICKING\n");
        }
        else
        {
            printf("DEAD AND ROTTING\n");
        }
    }
    return 0;
}
