#include <stdio.h>

int main() {
	unsigned long long int t,l,n,k,p,m,i,j,count,count1,a,c,b[1000] = {0},d[1000] = {0};
    scanf("%lld",&t);
    for(l=0;l<t;l++) {
        scanf("%lld %lld %lld",&n,&k,&p);
        for(i=1;i<=k;i++) {
            scanf("%lld %lld",&a,&b[i]);
        }
        for(i=1;i<=p;i++) {
            scanf("%lld %lld",&c,&d[i]);
        }
        count=0;
		for(i=1;i<=p;i++) {
			for(j=1;j<=k;j++) {
				if(d[i] == b[j]) {
					count++;
					break;
				}
			}
		}
		if(count == p) {
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
