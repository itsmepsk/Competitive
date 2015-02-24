#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,a,b,c,d,x,y,n,num;
    double ma;
    cin >> t;
    while(t--) {
        cin >> n;
        cin >> a >> b >> c >> d;
        cin >> x >> y;
        n = x > y ? x : y;
        ma = ceil(log2f(n));
        ma = powf(2,ma);
        num = 1;
        if(x <= ma/2) {
	        while(ma != 1) {
	            if(x <= ma/2) {
	                if(y <= ma/2) {
	                    num = num*2;
	                }
	                else {
	                    num = num*3;
	                    y = y - (ma/2);
	                }
	            }
	            else
	            if(x > ma/2) {
	                if(y <= ma/2) {
	                    num = num*4;
	                }
	                else {
	                    num = num*5;
	                    y = y - (ma/2);
	                }
	            }
	            ma = ma/2;
	        }
	        cout << num << endl;
    	}
    }
    return 0;
}
