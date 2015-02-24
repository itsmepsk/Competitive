#include <stdio.h>

int main() {
	int t,k,i;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&k);
		if(k <= 25) {
			for(i=k+1;i>=1;i--) {
				printf("%c",i+96);
			}
			printf("\n");
		}
		if(k > 25 && k <= 50) {
			for(i=(k-24);i>=1;i--) {
				printf("%c",i+96);
			}
			for(i=26;i>=1;i--) {
				printf("%c",i+96);
			}
			printf("\n");
		}
		if(k > 50 && k <= 75) {
			for(i=(k-49);i>=1;i--) {
				printf("%c",i+96);
			}
			for(i=26;i>=1;i--) {
				printf("%c",i+96);
			}
			for(i=26;i>=1;i--) {
				printf("%c",i+96);
			}
			printf("\n");
		}
		if(k > 75 && k <= 100) {
			for(i=(k-74);i>=1;i--) {
				printf("%c",i+96);
			}
			for(i=26;i>=1;i--) {
				printf("%c",i+96);
			}
			for(i=26;i>=1;i--) {
				printf("%c",i+96);
			}
			for(i=26;i>=1;i--) {
				printf("%c",i+96);
			}
			printf("\n");
		}
	}
	return 0;
}
