#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long long int t,n,count,count1,i,j,k,sum,arr[2050];
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&n);
		for(i=0;i<n;i++) {
			scanf("%lld",&arr[i]);
		}
		sort(arr+0,arr+n);
		count = 0;
		for(i=1;i<n;i++) {
			for(j=0;j<i;j++) {
				sum = arr[i] + arr[j];
				k = i+1;
				count1 = 0;
				while(arr[k] < sum && k < n) {
					k++;
					count1++;
				}
				count = count + count1;
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}
