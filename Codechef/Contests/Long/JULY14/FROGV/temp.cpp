#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long int n,k,p,i,j,a,b,x,y,mi,ma,flag,arr[100005],brr[100005];
    cin >> n >> k >> p;
    for(i=0;i<n;i++) {
        cin >> arr[i];
        brr[i] = arr[i];
    }
    sort(brr+0,brr+n);
    for(j=0;j<p;j++) {
        cin >> a >> b;
        a--;
        b--;
        mi = arr[a]<=arr[b]?a:b;
        ma = arr[a]>=arr[b]?a:b;
        for(i=0;i<n;i++) {
            if(brr[i] == arr[mi]) {
                x = i;
            }
            if(brr[i] == arr[ma]) {
                y = i;
            }
        }
        flag = 0;
        if(x == y) {
            cout << "Yes" << endl;
        }
        else {
            for(i=x+1;i<=y;i++) {
                if(brr[i] > brr[i-1] + k) {
                     flag = 1;
                     break;
                }
            }
            if(flag == 1) {
                cout << "No" << endl;
            }
            else {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}
