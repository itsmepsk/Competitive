#include <bits/stdc++.h>
using namespace std;

long long int arr[1000000];

int main() {
    long long int t,n,i,x,counter,maxi;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld",&n);
        for(i=0;i<n;i++) {
            scanf("%lld",&arr[i]);
        }
        x = arr[0];
        counter = 0;
        maxi = -1;
        for(i=1;i<n;i++) {
            x = __gcd(arr[i],x);
            if(x == 1) {
                counter++;
                if(counter > maxi) {
                	maxi = counter;
                }
            }
            else {
                if(counter > maxi && counter != 0) {
                    maxi = counter;
                    counter = 0;
                    x = arr[i];
                }
            }
        }
        if(maxi != -1) {
        	maxi++;
        }
        printf("%lld\n",maxi);
    }
    return 0;
}

