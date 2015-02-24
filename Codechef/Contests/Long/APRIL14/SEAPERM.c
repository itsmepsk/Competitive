#include <stdio.h>

int main() {
    long long int t,c,n,k,s,i,j,a[5000],b[5000],temp1,temp2;
    scanf("%lld",&t);
    for(c=0;c<t;c++) {
        scanf("%lld %lld %lld",&n,&k,&s);
        for(i=1;i<=n;i++) {
            scanf("%lld",&a[i]);
            b[i-1] = i;
        }
        for(j=1;j<n;j++) {
			for(i=1;i<n;i++) {
				if(a[i] >= a[i+1]) {
					temp1 = a[i];
					temp2 = b[i-1];
					a[i] = a[i+1];
					b[i-1] = b[i];
					a[i+1] = temp1;
					b[i] = temp2;
				}
			}
        }
        for(i=0;i<n;i++) {
            printf("%lld ",b[i]);
        }
        printf("\n");
    }
    return 0;
}
