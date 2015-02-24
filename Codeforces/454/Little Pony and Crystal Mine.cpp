#include <bits/stdc++.h>
using namespace std;

char arr[105][105];

int main() {
    int n,i,j,k,p;
    cin >> n;
    p = (n+1)/2;
    for(i=0;i<p;i++) {
        for(j=0;j<(n/2)-i;j++) {
            arr[i][j] = '*';
        }
        for(k=j;k<=(n/2)+i;k++) {
            arr[i][k] = 'D';
        }
        for(j=k;j<n;j++) {
            arr[i][j] = '*';
        }
    }
    for(i=0;i<p;i++) {
        for(j=0;j<n;j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    for(i=n/2-1;i>=0;i--) {
        for(j=0;j<n;j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}
