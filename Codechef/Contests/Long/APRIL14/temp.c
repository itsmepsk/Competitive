#include <stdio.h>

int main() {
	long long int t,l,n,k,p,a[1000]={0},b[1000]={0},c[1000]={0},d[1000]={0},m,i,j,count,count2;
	scanf("%lld",&t);
    for(l=0;l<t;l++) {
        scanf("%lld %lld %lld",&n,&k,&p);
        for(i=1;i<=k;i++) {
            scanf("%lld %lld",&a[i],&b[i]);
        }
        for(i=1;i<=p;i++) {
            scanf("%lld %lld",&c[i],&d[i]);
        }
        count2=0;
        for(i=1;i<=k;i++) {
        	count = 0;
        	m=1;
        	for(m=1;m<=p;m++) {
        		//If the boy divides linearly
				if(c[m] <= d[m]) {
					if(a[i] <= b[i]) {
						if(a[i] >= c[m] && b[i] <= d[m]) {
							count++;
							count2++;
							break;
						}
					}
					else {
						goto no;
					}
				}
				//If the boy divides circular
				else
				if(c[m] >= d[m]) {
					//If chef divides linearly 
					if(a[i] <= b[i]) {
						if((a[i] <= d[m] && b[i] <= d[m]) || (a[i] >= c[m] && b[i] >= c[m])) {
							count++;
							count2++;
							break;
						}
					}
					//If  the chef divides circular
					else {
						if(a[i] >= c[m] && b[i] <= d[m]) {
							count++;
							count2++;
							break;
						}
					}
				}
        	}
       		if(count == 0) {
       			no :
       				{
       					printf("No\n");
        				break;
       				}
        	}
        }
        if(count2 == k)
        printf("Yes\n");
    }
    return 0;
}
