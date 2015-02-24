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
        pro = (pro*(brr[i]%a))%b;
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
    long long int i,m,n,p,q,t,u,v,x,y,flag,sum,temp;
    cin >> t;
    while(t--) {
        cin >> n ;//>> m;
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
        for(i=1;i<=2*y;i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        sum = 0;
        temp = -1;
        for(i=1;i<=2*y;i++) {
        	if(arr[i] == 0) {
        		break;
        	}
        	if(temp == -1) {
        		u = sigma(arr[i],m);
        	}
        	else {
        		u = temp;
        	}
        	v = sigma(arr[i+1],m);
        	temp = v;
        	u = (u - v)%m;
        	if(u < 0) {
        		u = u + m;
        	}
        	sum = sum + (n/arr[i])*u;
        	sum = sum%m;
        }

    }
    return 0;
}
