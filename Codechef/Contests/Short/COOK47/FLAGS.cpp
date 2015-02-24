#include <stdio.h>
#include <iostream>

using namespace std;

long long int arr[5];

long long int fact(long long int n) {
    arr[2] = n*(n-1);
    arr[3] = arr[2]*(n-2);
    arr[4] = arr[3]*(n-3);
}

int main() {
    long long int t,n,sum;
    cin >> t;
    while(t--) {
        sum = 0;
        cin >> n;
        fact(n);
        if(n == 1) {
            sum = 0;
        }
        if(n == 2) {
            sum = sum + 2*arr[2];
        }
        else
        if(n == 3) {
            sum = sum + 3*arr[3] + arr[3]*2 + arr[2]*2;
        }
        else {
            sum = sum + 2*(arr[3] + arr[2]);
            sum = sum + 2*(arr[4] + arr[3]);
            sum = sum + arr[3];
        }
    cout << sum << endl;
    }
    return 0;
}
