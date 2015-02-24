#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n,m,k,i,j,l,r,counter,sum,x;
    vector <long long int > v1,v2;
    cin >> n >> m >> k;
    for(i=1;i<=n;i++) {
        cin >> x;
        v1.push_back(x);
    }
    for(i=0;i<(n-m+1);i++) {
        j = i + m - 1;
        sum = 0;
        for(l=i;l<=j;l++) {
            sum = sum + v1[l];
        }
        v2.push_back(sum);
    }
    sort(v2.rbegin(),v2.rend());
    counter = 1;
    sum = 0;
    for(i=0;i < k;i++) {
        sum = sum + v2[i];
        counter++;
    }
    cout << sum << endl;
    return 0;
}

