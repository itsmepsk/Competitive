#include <bits/stdc++.h>
#define MOD 1000000009
using namespace std;

vector <pair <long long int ,char > > arr,brr;
vector <pair <long long int ,char > >::iterator it,jt;
int main() {
    long long int t,n,m,y,i,counter;
    char x,temp[5];
    scanf("%lld",&t);
    while(t--) {
        arr = brr;
        scanf("%lld %lld",&n,&m);
        gets(temp);
        for(i=0;i<m;i++) {
            scanf("%c %lld",&x,&y);
            gets(temp);
            arr.push_back(pair <long long int , char >(y,x));
        }
        sort(arr.begin(),arr.end());
        counter = 1;
        for(it=arr.begin();it<arr.end()-1;it++) {
            jt = (it+1);
            if(it->second != jt->second) {
                counter = (counter*(jt->first - it->first))%MOD;
            }
        }
        printf("%lld\n",counter);
    }
    return 0;
}
