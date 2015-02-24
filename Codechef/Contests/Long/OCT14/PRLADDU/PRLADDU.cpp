#include <bits/stdc++.h>
using namespace std;

long long int arr[100005],brr[2][100005],crr[2][100005];

int main() {
    long long int t,n,i,j,p,q,m,counter;
    cin >> t;
    while(t--) {
        cin >> n;
        p = 0;
        q = 0;
        for(i=0;i<n;i++) {
            cin >> arr[i];
            if(arr[i] > 0) {
                brr[0][p] = i+1;
                brr[1][p++] = arr[i];
            }
            else
            if(arr[i] < 0) {
                crr[0][q] = i+1;
                crr[1][q++] = -arr[i];
            }
        }
        m = 0;
        counter = 0;
        for(i=0;i<p;i++) {
            for(j=m;j<q;j++) {
                if(brr[1][i] >= crr[1][j]) {
                    brr[1][i] = brr[1][i] - crr[1][j];
                    counter = counter + crr[1][j]*(abs(brr[0][i] - crr[0][j]));
                    crr[1][j] = 0;
                    i--;
                    m = j+1;
                }
                else
                if(brr[1][i] == crr[1][j]) {
                    brr[1][i] = 0;
                    counter = counter + crr[1][j]*(abs(brr[0][i] - crr[0][j]));
                    crr[1][j] = 0;
                    m = j+1;
                }
                else {
                    crr[1][j] = crr[1][j] - brr[1][i];
                    counter = counter + brr[1][i]*(abs(brr[0][i] - crr[0][j]));
                    brr[1][i] = 0;
                    m = j;
                    break;
                }
            }
        }
        cout << counter << endl;
    }
    return 0;
}
