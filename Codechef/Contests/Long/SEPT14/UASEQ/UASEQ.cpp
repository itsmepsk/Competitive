#include <bits/stdc++.h>
using namespace std;

long long int arr[100005],brr[100005],drr[100005];

int main() {
    long long int n,m,i,j,k,ele,a,d,r,p,st,di,counter,x;
    cin >> n >> k;
    for(i=0;i<n;i++) {
        cin >> arr[i];
    }
    for(i=1;i<n;i++) {
        brr[i-1] = arr[i] - arr[i-1];
    }
    /*
    for(i=0;i<n-1;i++) {
        cout << brr[i] << " ";
    }
    cout << endl;
    */
    p = 0;
    for(i=1;i<n;i++) {
        if(brr[i] != brr[i-1]) {
            drr[p++] = i-1;
        }
    }
    /*
    for(i=0;i<p;i++) {
        cout << drr[i] << " ";
    }
    cout << endl;
    */
    for(i=0;i<p;i++) {
        r = drr[i]+1;
        ele = arr[drr[i]];
        d = brr[drr[i]];
        a = ele - (r-1)*d;
        counter = 0;
        for(j=0;j<n;j++) {
            //cout << a + (j)*d << " ";
            x = (a + (j)*d);
            if(x == arr[j]) {
                counter++;
            }
        }
        if(counter == (n-k)) {
            if(i == 0) {
                st = a;
                di = d;
            }
            else
            if(i != 0) {
                if(a < st || (a==st && d < di)) {
                    st = a;
                    di = d;
                }
            }
        }
    }
    for(i=0;i<n;i++) {
        cout << st + i*di << " ";
    }
    cout << endl;
}
