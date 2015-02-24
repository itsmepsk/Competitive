#include <stdio.h>

int arr[12] = {1,2,4,8,16,32,64,128,256,512,1024,2048};

int main() {
	long long int t,p,count,i;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&p);
		count=0;
		while(p != 0) {
			if(p >= 2048) {
				p = p-2048;
				count++;
			}
			else {
				for(i=0;i<12;i++) {
					if(arr[i] > p) {
						count++;
						p = p - arr[i-1];
						break;
					}
				}	
			}
			
		}
		printf("%lld\n",count);
	}
	return 0;
}
