#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;


int main() {
    long long int x,y,z,i,n,ans,num;
    char a[10];
    while(1) {
        gets(a);
        x = a[0] - '0';
        y = a[1] - '0';
        z = a[3] - '0';
        if(x == 0 && y == 0 && z == 0) {
            break;
        }
        else {
            num = (10*x+y)*(pow(10,z));
            if(num == 1) {
                cout << "1" << endl;
            }
            else {
                for(i=1;i<=num;i*=2) {

                }
                i = i/2;
                ans = (num)%i;
                ans = 2*(ans) + 1;
                cout << ans << endl;
            }
        }
    }
    return 0;
}
