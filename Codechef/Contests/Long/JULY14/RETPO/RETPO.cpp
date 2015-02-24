#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long int t,x,y,mi,ma,ans;
    cin >> t;
    while(t--) {
        cin >> x >> y;
        if(x == y) {
            ans =  abs(x) + abs(y);
        }
        else
        if(x != y && (x != 0 && y != 0)) {
        	x = abs(x);
        	y = abs(y);
            mi = x < y ? x : y;
            ma = x > y ? x : y;
            ans = 2*mi;
            if(x > y) {
                ans = 2*y;
                if((x-y)%2 == 0) {
                	ans = ans + 2*(x-y);
                }
                else {
                	ans = ans + 2*(x-y) + 1;
                }
            }
            else {
                ans = 2*x;
                if((y-x)%2 == 0) {
                	ans = ans + 2*(y-x);
                }
                else {
                	ans = ans + 2*(y-x) - 1;
                }
            }
        }
        else
        if(x != y && (x == 0 || y == 0)) {
        	x = abs(x);
        	y = abs(y);
        	if(x == 0) {
        		if(y%2 == 0) {
        			ans = 2*y;
        		}
        		else {
        			ans = 2*y - 1;
        		}
        	}
        	if(y == 0) {
        		if(x%2 == 0) {
        			ans = 2*x;
        		}
        		else {
        			ans = 2*x + 1;
        		}
        	}
        }
        cout << ans << endl;
    }
    return 0;
}
