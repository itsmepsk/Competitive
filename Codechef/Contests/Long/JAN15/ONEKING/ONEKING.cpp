#include <bits/stdc++.h>
using namespace std;

vector < long long int > arr,brr;
vector < long long int >::iterator it,jt;

long long int less_than(long long int num) {
    mid = (left + right)/2;
    while (left <= right) {
        if(arr[mid] == num) {

        }
    }
}

int main() {
    long long int t,n,a,b,i,x;
    cin >> t;
    while(t--) {
        cin >> n;
        for(i=0;i<n;i++) {
            cin >> a >> b;
            arr.push_back(a);
            brr.push_back(b);
        }
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        for(it=brr.begin();it!=brr.end();it++) {
            //cout << it->first << endl;
            x = upper_bound(arr.begin()+1,arr.end(),*it)-arr.begin();
            cout << x << endl;
        }
    }
}
