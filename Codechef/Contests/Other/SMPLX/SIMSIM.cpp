#include <bits/stdc++.h>
using namespace std;

vector < long long int > v1,v2;

long long int arr[100005] = {0};

int main() {
    long long int t;
    double p,n,k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        p = ((n-1))/n;
        printf("%f\n",p);
    }
    return 0;
}

