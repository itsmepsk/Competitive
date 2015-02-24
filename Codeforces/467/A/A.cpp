#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,counter,arr,brr;
    cin >> n;
    counter = 0;
    for(i=0;i<n;i++) {
        cin >> arr >> brr;
        if(brr - arr >= 2) {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
