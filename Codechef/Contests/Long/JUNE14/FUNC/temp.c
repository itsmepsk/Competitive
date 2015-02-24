    #include <stdio.h>
    #include <math.h>
    long long int arr[100005],summ = 0;
     
    void root(long long int a,long long int b) {
	    long long int i,p,flag,sum = 0;
	    if(a > 60) {
	    	a = 60;
	    }
	    sum = ((b%1000000007)*(arr[1]%1000000007));
	    sum = sum%1000000007;
		for(i=2;i<=a;i++) {
			p = pow(b,(1.0/i));
			if(pow(p+1,i) <= b) {
				p = p + 1;
			}
			else
			if(pow(p,i) > b) {
				p = p - 1;
			}
			sum = sum + ((p%1000000007)*(arr[i]%1000000007))%1000000007;
			sum = sum%1000000007;
		}
		sum = sum + summ;
		sum = sum%1000000007;
		printf("%lld ",sum);
    }
     
    int main() {
	    long long int t,x,j,n,p,q;
	    scanf("%lld",&t);
	    while(t--) {
		    scanf("%lld %lld",&n,&q);
		    summ = 0;
		    for(j=1;j<=n;j++) {
		    	scanf("%lld",&arr[j]);
		    	if(arr[j]%1000000007 < 0) {
		    		arr[j] = arr[j]%1000000007+1000000007;
		    	}
				if(j > 60) {
					summ = summ + arr[j]%1000000007;
					if(summ >= 1000000007) {
						summ = summ%1000000007;
					}
				}
		    }
		    for(j=1;j<=q;j++) {
		    	scanf("%lld",&x);
		    	root(n,x);
		    }
		    printf("\n");
	    }
	    return 0;
    } 
