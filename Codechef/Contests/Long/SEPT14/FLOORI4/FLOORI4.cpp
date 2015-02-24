#include <bits/stdc++.h>
using namespace std;

long long int arr[100005];

long long int sigma(long long int n,long long int m) {
    long long int ar[3] = {2,3,5};
    long long int br[3] = {n,n+1,2*n+1};
    long long int cr[3] = {0};
    long long int i,j,pro,sum1,d,pr,g;

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            if(br[j]%ar[i] == 0) {
                br[j] = br[j]/ar[i];
                cr[i] = 1;
                break;
            }
        }
    }
    pro = 1;
    for(i=0;i<3;i++) {
        pro = ((pro%m)*(br[i]%m)%m);
    }
    if(cr[2] == 1) {
        sum1 = (3*(((n%m)*(n%m))%m))%m;
        sum1 = (sum1 + ((n%m)*3)%m - 1)%m;
        pro = ((pro)*(sum1))%m;
    }
    else {
		if(m%5 != 0) {
			pr = 1;
			for(i=1;i<=m-2;i++) {
				pr = (pr*5)%m;
			}
	        sum1 = 3*(((n%m)*(n%m))%m)%m;
	        sum1 = (sum1 + ((n%m)*3)%m - 1)%m;
	        pro = ((((pro)*(sum1%m))%m)*pr)%m;
		}
		else {
			double a,b,c,r;
			a = fmod(((fmod((n/5.0),m))*(n%m)*3),m);
			b = fmod(((fmod(3*n,m))/5.0),m);
			c = a + b - 0.2;
			r = 1.0*m;
			r = fmod(c,r);
			d = r;
			if(fmod(r,d) <= 0.1) {
				d = r;
			}
			else {
				d = r+1;
			}
			pro = (pro*d)%m;
		}
    }
    return pro;
}

long long int po(long long int n,long long int m) {
    long long int x;
    if(n > 100000000) {
        x = (n%m);
        x = (x*x)%m;
    }
    else {
        x = n*n;
    }
    if(x > 100000000) {
        x = (x%m);
        x = (x*x);
        if(x > 10000000000000000) {
            x = x%m;
        }
    }
    else {
        x = x*x;
    }
    return x;
    /*
    x = (n%m);
	return ((((x*x)%m)*((x*x)%mod))%mod);
	return x;
	*/
}

int main() {
    long long int t,n,m,i,j,sum,y,z,p,x,q;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld %lld",&n,&m);
        for(i=1;i*i<=n;i++) {
            arr[i] = (n/i);
        }
        q = sqrt(n);
        arr[i++] = q;
        sum = 0;
        for(i=1;i*i<=n;i++) {
			x = po(i,m);
            sum = sum + (n/i)*x;
        }
        p = q;
        p++;
        for(i=1;i<p;i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        for(i=1;i<p;i++) {
            y = sigma(arr[i],m);
            z = sigma(arr[i+1],m);
            y = y-z;
            if(y < 0) {
            	y = y + m;
            }
        	sum = sum + (n/arr[i])*(y);
        	sum = sum%m;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
