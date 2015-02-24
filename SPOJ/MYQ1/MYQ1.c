#include <stdio.h>

int main() {
	long long int t,n,row;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&n);
		if(n == 1) {
			printf("poor conductor\n");
		}
		else {
			row = n/5;
			if(n%5 == 1) {
				row = row;
			}
			else
			if(n%5 == 2 || n%5 == 3 || n%5 == 4) {
				row = row + 1;
			}
			if(row%2 == 1) {
				if(n > row*5) {
					printf("%lld W R\n",row);
				}
				else
				if(n == row*5) {
					printf("%lld M R\n",row);
				}
				else
				if(n%5 == 4) {
					printf("%lld A R\n",row);
				}
				else {
					if(n%5 == 2) {
						printf("%lld W L\n",row);
					}
					else
					if(n%5 == 3) {
						printf("%lld A L\n",row);
					}
				}
			}
			else {
				if(n > row*5) {
					printf("%lld W L\n",row);
				}
				else
				if(n == row*5) {
					printf("%lld A L\n",row);
				}
				else {
					if(n%5 == 2) {
						printf("%lld W R\n",row);
					}
					else
					if(n%5 == 3) {
						printf("%lld M R\n",row);
					}
					else
					if(n%5 == 4) {
						printf("%lld A R\n",row);
					}
				}
			}
		}
	}
	return 0;
}
