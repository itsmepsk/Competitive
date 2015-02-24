#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t,n,x,i,v,sum,arr[105];
	scanf("%d",&t);
	while(t--) {
		scanf("%d %d",&n,&x);
		sum = 0;
		for(i=0;i<n;i++) {
			scanf("%d",&arr[i]);
			sum = sum + arr[i];
		}
		v = sum%x;
		if(v == 0) {
			printf("%d\n",sum/x);
		}
		else {
			sort(arr+0,arr+n);
			if(v >= arr[0]) {
				printf("-1\n");
			}
			else {
				printf("%d\n",sum/x);
			}
		}
	}
	return 0;
}
