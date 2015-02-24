#include <bits/stdc++.h>
using namespace std;

long long int arr[100005],brr[100005],mod;

long long int sigma(long long int n,long long int m) {
    long long int ar[3] = {2,3,5};
    long long int br[3] = {n,n+1,2*n+1};
    long long int cr[3] = {0};
    long long int i,j,pro,sum1,d,pr;

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
        sum1 = (n%m);
        sum1 = ((sum1%m)*(n%m))%m;
        sum1 = (3*sum1)%m;
        //sum1 = ((((n%m)*(n*m))%m)*3)%m;
        sum1 = sum1 + ((n%m)*3)%m - 1;
        sum1 = sum1%m;
        pro = ((pro%m)*(sum1%m))%m;
        //cout << pro << endl;
    }
    else {
		if(m%5 != 0) {
			pr = 1;
			for(i=1;i<=m-2;i++) {
				pr = (pr*5)%m;
			}
	        sum1 = (n%m);
	        sum1 = ((sum1%m)*(n%m))%m;
	        sum1 = (3*sum1)%m;
	        //sum1 = ((((n%m)*(n*m))%m)*3)%m;
	        sum1 = sum1 + ((n%m)*3)%m - 1;
	        sum1 = sum1%m;
	        pro = ((pro%m)*(sum1%m))%m;
			pro = (pr*pro)%m;
		}
		else {
			double a,b,c,r;
			a = (n/5.0);
			a = fmod(a,m);
			a = a * (n%m) * 3;
			a = fmod(a,m);
			b = 3*n;
			b = (b/5.0);
			b = fmod(b,m);
			b = fmod(b,m);
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
	//long long int x = ((n)*(n+1)*(2*n+1)*(3*n*n+3*n-1))/30;
    return pro;
}

long long int po(long long int n) {
	return (((((n%mod)*(n%mod))%mod)*(((n%mod)*(n%mod))%mod))%mod);
}

int main() {
    long long int i,j,m,n,p,q,t,u,v,x,y,flag,sum,temp,counter;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        flag = 0;
        memset(arr,0,sizeof(arr));
        for(i=1;i*i<=n;i++) {
            arr[i] = (n/i);
        }
        q = i;
        i--;
        y = sqrt(n);
        if(arr[i] == y) {
            p = i-1;
        }
        else {
            p = i;
        }
        for(i=q;p>0;i++,p--) {
            x = (n/p);
            arr[i] = (n/x);
        }
        p = 2*y;
        if(arr[p] == 0) {
            p--;
        }
        counter = 0;
        for(i=p;i>0;i--) {
            if(arr[i] == (p-i+1)) {
                counter++;
            }
        }
        sum = 0;
        for(i=1;i<=counter;i++) {
        	sum = sum + sigma(arr[i],m);
        	sum = sum%m;
        }
        for(j=1;j<=(p-counter);j++) {
            sum = sum + (((arr[j] - arr[j+1])%m)*sigma((arr[p-j+1]),m))%m;
            sum = sum%m;
        }
        cout << sum << endl;
    }
    return 0;
}
