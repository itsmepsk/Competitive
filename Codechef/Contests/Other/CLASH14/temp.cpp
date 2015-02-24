#include <bits/stdc++.h>
using namespace std;

long long int  power(long long int a, long long int b){
  long long int p;
  if(b==0) {
    return 1;
  }
  p = power(a,b/2);
  p = (p*p);
  if(b%2) {
     p = (p*a);
  }
  return p;
}
int main()
{
    long long int t,n,a,b,c,d,x,y,maxi,siz,ans,cd;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> a >> b >> c >> d;
        cin >> x >> y;
        if(y>x) {
           maxi = y;
        }
        else {
            maxi = x;
        }
        x--;
        y--;
        siz = ceil(log2(maxi));
        siz = power(2,siz);
        ans = 1;
        while(siz) {
            siz/=2;
            if(!siz)
            break;
            if(x < siz) {
                cd=1;
            }
            else {
                cd=3;
            }
            if(y >= siz) {
                cd++;
            }
            if(cd==1) {
                ans*=a;
            }
            else
            if(cd==2) {
                ans*=b;
            }
            else
            if(cd==3) {
                ans*=c;
            }
            else
            if(cd==4) {
                ans*=d;
            }
            x = x%siz;
            y = y%siz;
        }
        cout << ans << endl;
    }
    return 0;
}
