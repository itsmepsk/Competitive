#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long int t,x,y,ans,dif;
    cin >> t;
    while(t--) {
        cin >> x >> y;
        if((x >= 0 && y >= 0) || (x >= 0 && y <= 0)) {
            x = abs(x);
            y = abs(y);
            if(y == x) {
                ans = x + y;
            }
            else
            if(x != 0 && y != 0 && x > y) {
                ans = 2*abs(y);
                dif = (x - y);
                if(dif%2 == 0) {
                    ans = ans + 2*dif;
                }
                else {
                    ans = ans + 2*dif - 1;
                }
            }
            else
            if(x != 0 && y != 0 && x < y) {
                ans = 2*abs(x);
                dif = (y - x);
                if(dif%2 == 0) {
                    ans = ans + 2*dif;
                }
                else {
                    ans = ans + 2*dif - 1;
                }
            }
            else
            if(x != 0 && y == 0) {
               if(x%2 != 0) {
                ans = 2*x + 1;
               }
               else {
                ans = 2*x;
               }
            }
            if(x == 0 && y != 0) {
                y = abs(y);
                if(y%2 != 0) {
                    ans = 2*abs(y) - 1;
                }
                else {
                    ans = 2*abs(y);
                }
            }
        }
        else
        if((x < 0 && y >= 0) || (x < 0 && y <= 0)) {
            x = abs(x);
            y = abs(y);
            if(y != 0 && x != 0) {
                if(x == y) {
                    ans = x + y;
                }
                else
                if(x < y) {
                    ans = 2*x;
                    dif = (y - x);
                    if(dif %2 == 0) {
                        ans = ans + 2*dif;
                    }
                    else {
                        ans = ans + 2*(dif) - 1;
                    }
                }
                if(x > y) {
                    ans = 2*y;
                    dif = (x - y);
                    if(dif %2 == 0) {
                        ans = ans + 2*dif;
                    }
                    else {
                        ans = ans + 2*(dif) - 1;
                    }
                }
            }
            else
            if(x != 0 && y == 0) {
                x = abs(x);
               if(x%2 != 0) {
                ans = 2*x - 1;
               }
               else {
                ans = 2*x;
               }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
