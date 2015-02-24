#include <bits/stdc++.h>
using namespace std;

long long int arr[27] = {0};

int main() {
    long long int n,k,i,p,sum,num,rum;
    string str;
    cin >> n >> k;
    cin >> str;
    for(i=0;i<n;i++) {
        arr[str[i]-'A'+1]++;
    }
    /*
    for(i=0;i<27;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    */
    sort(arr,arr+27);
    /*
    for(i=0;i<27;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    */
    i = 0;
    p = 26;
    sum = 0;
    num = k;
    while(num > 0) {
        //cout << "num " << num << endl;
        //cout << "arr[p] " << arr[p] << endl;
        if(arr[p] > num) {
            sum = sum + num*num;
            num = num - num;
        }
        else {
            rum = arr[p];
            sum = sum + rum*rum;
            num = num - arr[p];
        }
        //cout << "num " << num << endl;
        //cout << "sum " << sum << endl;
        p--;
    }
    cout << sum << endl;
    return 0;
}
