#include <iostream>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <algorithm>
#include <map>
#include <vector>
#include <cstdio>
#include <cmath>
 
using namespace std;
 
int md,n,i,j,l,ans,d,M,r;
int dp[1000][300];
int a[400000];
int co[1000];
 
int main()
{
int T;
cin >> T;
while (T){T--;
    cin >> n;
    M = 0;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        if (a[i]>M) M = a[i];
    }
        
    md = 1000000007;
    
    ans = 1;
    for (i=1;i<=n;i++)
    {     
        ans = ans + ans;
        if (ans >= md) ans -= md;
    }
    
    ans = ans - n - 1;
       
    if (ans<0) ans += md;
 
    memset(co,0,sizeof(co));
    memset(dp,0,sizeof(dp));
    
    for (i=1;i<=n;i++)
    {
        for (d=-M;d<=M;d++)
        {
            if (a[i]-d>0)
            if (a[i]-d<=M)
            {
                        r = (dp[a[i]-d][d+M]+co[a[i]-d]);  
                        if (r>=md) r-=md;
                        dp[a[i]][d+M] += r;
                        if (dp[a[i]][d+M]>=md) dp[a[i]][d+M] -= md;
                        ans -= r;
                        if (ans<0) ans += md;
            }
        }
        co[a[i]]++;
    }
    
    cout << ans << endl;
    }
//    system("pause");
    return 0;
} 
