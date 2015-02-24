#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;
long long int factorial;

long long int fact(long long int val) {
	if(val == 1 || val == 0) {
		return 1;
	}
	factorial = val * fact(val-1);
}

int main() {
	long long int t,i,k,val,ans,count=0,counter=0,a,b,c;
	long long int arr[11],brr[111] = {0};
	scanf("%lld",&t);
	while(t--) {
		count = 0;
		counter = 0;
		for(i=0;i<111;i++) {
			brr[i] = 0;
		}
		for(i=0;i<11;i++) {
			scanf("%lld",&arr[i]);
			brr[arr[i]]++;
		}
		scanf("%lld",&k);
		sort(arr+0,arr+11);
		val = arr[11-k];
		count = brr[val];
		for(i=10;i>=11-k;i--) {
			if(arr[i] == val) {
				counter++;
			}
		}
		a = fact(count);
		b = fact(counter);
		c = fact(count-counter);
		ans = a/(b*c);
		printf("%lld\n",ans);
	}
	return 0;
}
