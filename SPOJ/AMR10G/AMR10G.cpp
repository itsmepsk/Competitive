#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long long int t,n,k,i,j,dif,min,arr[20005];
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld %lld",&n,&k);
		for(i=0;i<n;i++) {
			scanf("%lld",&arr[i]);
		}
		sort(arr+0,arr+n);
		min = 1000000005;
		for(i=0;i<=n-k;i++) {
			j = i+k-1;
			dif = arr[j] - arr[i];
			if(dif < min) {
				min = dif;
			}
		}
		printf("%lld\n",min);
	}
	return 0;
}
