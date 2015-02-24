#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int p,q,l,r,i,j,k,counter,x,y;
    long long int arr[100005] = {0},brr[100005] = {0};
    cin >> p >> q >> l >> r;

    for(i=0;i<p;i++) {
        cin >> x >> y;
        for(j=x;j<=y;j++) {
            arr[j] = 1;
        }
    }
    /*
    for(i=0;i<q;i++) {
        cin >> x >> y;
        for(j=x;j<=y;j++) {
            brr[j] = 1;
        }
    }
    */
    for(i=0;i<q;i++) {
        cin >> x >> y;
        for(j=l;j<=r;j++) {
            for(k=x;k<=)
            brr[x+j] = 1;
        }
    }
    cout << counter << endl;
    return 0;
}

