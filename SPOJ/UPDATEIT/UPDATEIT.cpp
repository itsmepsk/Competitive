#include <bits/stdc++.h>
using namespace std;
long long int n,BIT[100005];

void update(long long int p,long long int val) {
	long long int i;
	i = p;
	while(i <= n) {
		BIT[i] = BIT[i] + val;
		i = i + (i&(-i));
	}
}

void update_range(long long l,long long int r,long long int val) {
	update(l,val);
	update(r+1,-val);
}

long long int query(long long int pos) {
	long long int i,sum;
	i = pos;
	sum = 0;
	while(i > 0) {
		sum = sum + BIT[i];
		i = i - (i&(-i));
	}
	return sum;
}

int main() {
	long long int t,u,l,q,r,val,pos,i;
	scanf("%lld",&t);
	while(t--) {
		memset(BIT,0,sizeof(BIT));
		scanf("%lld %lld",&n,&u);
		while(u--) {
			scanf("%lld %lld %lld",&l,&r,&val);
			update_range(l+1,r+1,val);
		}
		scanf("%lld",&q);
		while(q--) {
			scanf("%lld",&pos);
			printf("%lld\n",query(pos+1));
		}
	}
	return 0;
}
