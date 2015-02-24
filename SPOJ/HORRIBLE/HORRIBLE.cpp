#include <bits/stdc++.h>
using namespace std;
long long int n,BIT1[100005],BIT2[100005];

void update(long long int ar[],long long int p,long long int val) {
	long long int i;
	i = p;
	while(i <= n) {
		ar[i] = ar[i] + val;
		i = i + (i&(-i));
	}
}

void update_range(long long l,long long int r,long long int val) {
	update(BIT1,l,val);
	update(BIT1,r+1,-val);
	update(BIT2,l,val*(l-1));
	update(BIT2,r+1,-val*r);
}

long long int query(long long int ar[],long long int pos) {
	long long int i,sum;
	i = pos;
	sum = 0;
	while(i > 0) {
		sum = sum + ar[i];
		i = i - (i&(-i));
	}
	return sum;
}
long long int range_query(long long int l,long long int r) {
    return (query(BIT1,r) - query(BIT2,l-1));
}
int main() {
    long long int t,i,p,q,x,y,l,r,ans,data;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld %lld",&n,&q);
        memset(BIT1,0,sizeof(BIT1));
        memset(BIT2,0,sizeof(BIT2));
        //createBIT(n);
        while(q--) {
            scanf("%lld",&p);
            if(p == 0) {
                scanf("%lld %lld %lld",&x,&y,&data);
                update_range(x,y,data);
            }
            else {
                scanf("%lld %lld",&l,&r);
                ans = range_query(l,r);
                printf("%lld\n",ans);
            }
        }
    }
    return 0;
}

