#include <bits/stdc++.h>
using namespace std;

long long int arr[100005];

int main() {
    long long int n,m,i,j,k,y,a,d,st,di,counter,x;
    cin >> n >> k;
    for(i=0;i<n;i++) {
        cin >> arr[i];
    }
    st = 1000000000000000;
    di = 1000000000000000;
    for(i=0;i<k+2;i++) {
        for(j=i+1;j<k+2;j++) {
        	d = arr[j] - arr[i];
        	if(d%(j-i) == 0) {
	            d = (arr[j] - arr[i])/(j-i);
	            a = arr[i] - i*d;
	            counter = 0;
	            for(y=0;y<n;y++) {
	                x = (a + (y)*d);
	                //cout << x << " ";
	                if(x == arr[y]) {
	                    counter++;
	                }
	            }
	            //cout << endl;
	            if(counter >= (n-k)) {
                    if(a < st || (a==st && d < di)) {
                        st = a;
                        di = d;
                    }
	            }
        	}
        }
    }
    //cout << st << " " << di << endl;
    for(i=0;i<n;i++) {
        cout << st + i*di << " ";
    }
    cout << endl;
}

