#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> p;
    long long int j=1,i,n;
    char na[100];
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",na);
        if ( p.find(na) == p.end() )
        p[na]=1;
        else
        p[na]++;
        if(p[na]==j)
        {
            printf("%lld %s\n",j,na);
            j++;
        }
    }
    return 0;
}
