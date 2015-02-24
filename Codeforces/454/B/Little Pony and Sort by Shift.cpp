#include <bits/stdc++.h>
using namespace std;

int arr[100005];

int main() {
    int n,i,break1,counter,val,maxi,maxi1,prev,inc,flag,mini;
    cin >> n;
    for(i=0;i<n;i++) {
        cin >> arr[i];
    }
    counter = 0;
    break1 = 0;
    val = n;
    inc = 1;
    flag = 0;
    if(n == 2) {
        if(arr[0] > arr[1]) {
            cout << "1" << endl;
            return 0;
        }
    }
    for(i=1;i<n;i++) {
        if(arr[i] >= arr[i-1]) {
            inc++;
        }
    }
    if(inc == n) {
        cout << "0" << endl;
        return 0;
    }
    else {
        for(i=1;i<n;i++) {
            if(break1 == 0) {
                if(arr[i] >= arr[i-1]) {
                    counter++;
                }
                else {
                    break1 = 1;
                    val = i;
                }
            }
            if(break1 == 1) {
                if(arr[i] >= arr[i-1]) {
                    counter++;
                }
                else {
                    cout << "-1a" << endl;
                    return 0;
                }
            }
        }
        if(arr[n-1] <= arr[0]) {
            cout << n - val << endl;
            return 0;
        }
    }
    cout << "-1b" << endl;
    return 0;
}
