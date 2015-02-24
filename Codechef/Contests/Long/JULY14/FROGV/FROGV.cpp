#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<long long int> arr,brr,crr;

int main() {
    long long int mi,ma,num,i,j,n,m,k,p,a,b;
    cin >> n >> k >> p;
    for(i=1;i<=n;i++) {
        cin >> num;
        arr.push_back(num);
        brr.push_back(num);
    }
    sort(brr.begin(),brr.end());
    //brr.erase(unique(brr.begin(),brr.end()),brr.end());
    m = 1;
    crr.push_back(1);
    for(i=1;i<n;i++) {
        if(brr[i] <= brr[i-1]+k) {
            crr.push_back(m);
        }
        else {
            m++;
            crr.push_back(m);
        }
    }

    for(j=0;j<p;j++) {
        cin >> a >> b;
        a--;
        b--;
        mi = arr[a]<=arr[b]?a:b;
        ma = arr[a]>=arr[b]?a:b;
        mi = find(brr.begin(),brr.end(),arr[mi]) - brr.begin();
        ma = find(brr.begin(),brr.end(),arr[ma]) - brr.begin();
        if(crr[mi] == crr[ma]) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}
