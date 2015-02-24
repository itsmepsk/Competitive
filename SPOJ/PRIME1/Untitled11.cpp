#include<stdio.h>
int pali(int z)
{
   int a,b=0,c;
   c=z;
   while(z>0)
   {
   a=z%10;
   z=z/10;
   b=a+10*b;
   }
   if(b==c)
   return(c);
   else
   return -1;
}
int main()
{
    int n,t=0,y,i,d,x,count;
    scanf("%d",&n);
    x=n;
    while(t==0)
    {
        y=pali(x);
        if(y>0)
        {
        	count = 0;
            for(i=2;i*i<=y;i++)
            {
                d=y%i;
                if(d==0)
                {
                	count = 1;
                	break;
                }
            }
            if(count == 0)
            {
                printf("%d\n",y);
                return 0;
            }
        }
        x=x+1;
    }
}
