#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t,n,m,d,i,arr[505],count;
	scanf("%d",&t);
	while(t--) {
		scanf("%d %d %d",&n,&m,&d);
		count = 0;
		for(i=0;i<n;i++) {
			scanf("%d",&arr[i]);
			count = count + arr[i]/d;
			if(arr[i] % d == 0 && arr[i]/d != 0) {
				count--;
			}
		}
		if(count >= m) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}
