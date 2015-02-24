#include <stdio.h>
#include <string.h>

int mini(int x,int y)
{
    if(x <= y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int i,j,k,n,p,q,r,s,m,o,ab;
    char temp[5];
    scanf("%d",&n);
    gets(temp);
    for(i=0;i<n;i++)
    {
    	int smalla[27] = {0};
		int capa[27] = {0};
		int numa[10] = {0};
		int numb[10] = {0};
		int smallb[27] = {0};
		int capb[27] = {0};
		int counter = 0,counter1 = 0,counter2 = 0,counter3 = 0,check1 = 0,check2 = 0,check3 = 0;
    	char a[10001] = {'\n'},b[10001] = {'\n'};
        gets(a);
        gets(b);
        m = strlen(a);
        o = strlen(b);
        ab = (m < o)? o:m;
        for(j=0;j < ab;j++)
        {
            if(j < m)
            {
                if(a[j] >= 'A' && a[j] <= 'Z')
                {
                    p = a[j]-64;
                    capa[p]++;
                }
                if(a[j] >= '0' && a[j] <= '9')
                {
                    numa[a[j]-48]++;
                }
                if(a[j] >= 'a' && a[j] <= 'z')
                {
                    q = a[j]-96;
                    smalla[q]++;
                }
            }
            if(j < o)
            {
                if(b[j] >= 'A' && b[j] <= 'Z')
                {
                    r = b[j]-64;
                    capb[r]++;
                }
                if(b[j] >= '0' && b[j] <= '9')
                {
                    numb[b[j]-48]++;
                }
                if(b[j] >= 'a' && b[j] <= 'z')
                {
                    s = b[j]-96;
                    smallb[s]++;
                }
            }

        }
        for(k=1;k<27;k++)
        {
            if(smalla[k] != 0 && smallb[k] != 0)
            {
                counter1 = mini(smalla[k],smallb[k]);
                check1 = check1 + counter1;

            }
            if(capa[k] != 0 && capb[k] != 0)
            {
                counter2 = mini(capa[k],capb[k]);
                check2 = check2 + counter2;
            }
        }
        
        for(k=0;k<10;k++)
		{
			    if(numa[k] !=0 && numb[k] != 0)
		        {
		    	    counter3 = mini(numa[k],numb[k]);
		            check3 = check3 + counter3;
		        }
		}        
        counter = check1+check2+check3;
        printf("%d\n",counter);
    }
    return 0;
}
