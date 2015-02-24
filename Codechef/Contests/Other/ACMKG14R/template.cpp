#include <bits/stdc++.h>
using namespace std;

vector < long long int > v1,v2;

long long int arr[100005] = {0};

int main() {
    long long int t,n,i,x;
    cin >> t;
    while(t--) {
        cin >> n;
        for(i=0;i<n;i++) {
            cin >> arr[i];
            x = arr[i];
            v1.push_back(x);
        }
        sort(arr,arr+n);
    }
    return 0;
}
