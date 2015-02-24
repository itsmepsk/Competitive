#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	long long int t,n,i,arr[5002],dif,min;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&n);
		for(i=0;i<n;i++) {
			scanf("%lld",&arr[i]);
		}
		sort(arr+0,arr+n);
		min = 1000000001;
		for(i=0;i<n-1;i++) {
			dif = abs(arr[i] - arr[i+1]);
			if(dif < min) {
				min = dif;
			}
		}
		printf("%lld\n",min);
	}
	return 0;
}
