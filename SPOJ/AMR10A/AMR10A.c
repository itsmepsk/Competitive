#include <stdio.h>
#include <math.h>

long long int x[100000],y[100000];

int main() {
	long long int n,q,i,j,m,c,d,l;
	double sum,sum2,ans;
	scanf("%lld %lld",&n,&q);
	for(i=0;i<n;i++) {
		scanf("%lld %lld",&x[i],&y[i]);
	}
	for(j=1;j<=q;j++) {
		scanf("%lld %lld",&c,&d);
		sum = 0;
		for(i=c;i<=d;i++) {
			m = i+1;
			if(m > d) {
				m = c;
			}
			else
			if(m < c) {
				m = d;
			}
			sum = sum + (double)(x[i]*y[m] - y[i]*x[m]);
		}
		sum = (double)abs(sum);
		sum = sum/2;
		l = n-1;
		sum2 = 0;
		for(i=0;i<n;i++) {
			m = i+1;
			if(m > n-1) {
				m = 0;
			}
			sum2 = sum2 + (double)(x[i]*y[m] - y[i]*x[m]);
		}
		sum2 = (double)abs(sum2);
		sum2 = sum2/2;
		sum2 = sum2 - sum;
		ans = sum>sum2?sum2:sum;
		printf("%.1lf\n",ans);
	}
	return 0;
}
