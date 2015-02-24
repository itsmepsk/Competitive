#include <bits/stdc++.h>
using namespace std;

long long int arr[100005],crr[3] = {2,3,5},drr[3];

long long int sigma(long long int a,long long int b) {
	long long int brr[3] = {a,a+1,2*a+1},i,j,p,q,sum,pro,x;
	memset(drr,0,sizeof(drr));
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			if(brr[i]%crr[j] == 0) {
				brr[i] = brr[i]/crr[j];
				drr[j] = 1;
				break;
			}
		}
	}
	pro = 1;
	for(i=0;i<3;i++) {
        pro = (pro*(brr[i]%b))%b;
	}
	p = (a%b);
	if(p == 1 || p == 3) {
        x = (a/5);
        sum = (3*(5*x+p))%b;
        sum = (sum + ((p)*(sum))%b - 1)%b;
	}
	else {
        q = 3*p;
        sum = (((q)%b)*p)%b;
        sum = (sum + (q%b) - 1)%b;
	}
	sum = (sum*pro)%b;
	return sum;
}

int main() {
    long long int i,j,m,n,e,f,t,u,v,x,y,flag,summ,temp,counter;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        flag = 0;
        memset(arr,0,sizeof(arr));
        for(i=1;i*i<=n;i++) {
            arr[i] = (n/i);
        }
        f = i;
        i--;
        y = sqrt(n);
        if(arr[i] == y) {
            e = i-1;
        }
        else {
            e = i;
        }
        for(i=f;e>0;i++,e--) {
            x = (n/e);
            arr[i] = (n/x);
        }
        e = 2*y;
        if(arr[e] == 0) {
            e--;
        }
        counter = 0;
        for(i=e;i>0;i--) {
            if(arr[i] == (e-i+1)) {
                counter++;
            }
        }
        summ = 0;
        for(i=1;i<=counter;i++) {
        	summ = summ + sigma(arr[i],m);
        }
        for(j=1;j<=(e-counter);j++) {
            summ = summ + (arr[j] - arr[j+1])*sigma(arr[e-j+1],m);
        }
        cout << summ << endl;
    }
    return 0;
}

