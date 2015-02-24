#include <bits/stdc++.h>
using namespace std;

vector <int > arr;
bool wayToSort(int i, int j) { return i > j; }

int main() {
    int n,k,i,ans,x;
    cin >> n >> k;
    for(i=0;i<n;i++) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end(),wayToSort);
    ans = 0;
    for(i=0;i<n;i+=k) {
        ans = ans + 2*(arr[i]-1);
    }
    cout << ans << endl;
    return 0;
}
