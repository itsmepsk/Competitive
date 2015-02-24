#include <bits/stdc++.h>
using namespace std;

int isprime(long long int a,long long int b) {
    long long int i,f1,f2;
    f1 = 0;
    f2 = 0;
    for(i=2;i*i<=a;i++) {
        if(a%i == 0) {
            f1 = 1;
            break;
        }
    }
    for(i=2;i*i<=b;i++) {
        if(b%i == 0) {
            f2 = 1;
            break;
        }
    }
    return f1 + f2;
}

int main() {
    long long int n,i,p;
    cin >> n;
    for(i=2;i<=(n-2);i++) {
        p = isprime(i,n-i);
        if(p == 2) {
            cout << i << " " << n-i << endl;
            break;
        }
    }
    return 0;
}
