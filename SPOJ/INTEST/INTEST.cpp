#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n,k,t,counter;
    counter = 0;
    scanf("%lld %lld",&n,&k);
    while(n--) {
        scanf("%lld",&t);
        if(t%k == 0) {
            counter++;
        }
    }
    printf("%lld\n",counter);
    return 0;
}
