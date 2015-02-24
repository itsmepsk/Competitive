#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,m,a,b,i,arr[100005],brr[100005];
    vector <tuple <int ,int > > p,q,r;
    scanf("%d",&t);
    while(t--) {
        p = r;
        q = r;
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++) {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<m;i++) {
            scanf("%d &d",&a,&b);
            p.push_back(tuple <int ,int >(a,b));
            q.push_back(tuple <int ,int >(b,a));
        }
        sort(p.begin(),p.end());
        sort(q.begin(),q.end());
        for(i=0;i<m;i++) {

        }
    }
}
