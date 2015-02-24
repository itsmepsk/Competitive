#include <bits/stdc++.h>
using namespace std;

long long int arr[200005],power[100];

long long int func(long long int m,long long int in) {
    for(i=0;i<=log2(n);i++) {
        val = func(arr[in - power[k]]);
        if(val < maxi) {
            maxi = val;
        }
    }
}

int main() {
    long long int n,i,j,sum,m,p,k;

    cin >> n;
    for(i=1;i<=n;i++) {
        cin >> arr[i];
    }
    func(arr[n],n);
    return 0;
}
