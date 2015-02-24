#include <bits/stdc++.h>
using namespace std;

vector < long long int > v1,v2;

long long int arr[100005] = {-1},brr[100005] = {-1};

int main() {
    long long int t,n,i,x,sum;
    cin >> t;
    while(t--) {
        cin >> n;
        memset(arr,-1,sizeof(arr));
        memset(brr,-1,sizeof(brr));
        for(i=0;i<n;i++) {
            cin >> x;
            if(x < 0) {
                brr[abs(x)] = 1;
            }
            else {
                arr[x] = 1;
            }
        }
        sum = 0;
        for(i=1;i<100001;i++) {
            if(arr[i] > 0 && brr[i] > 0) {
                sum++;
            }
        }
        if(arr[0] >= 2) {
            sum++;
        }
        cout << sum << endl;
    }
    return 0;
}

