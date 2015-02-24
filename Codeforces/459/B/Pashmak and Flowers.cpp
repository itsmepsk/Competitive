#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

long long int arr[200505];

int main() {
    long long int i,n,dif,maxi,maxic,mini,minic,num;
    cin >> n;
    for(i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr+0,arr+n);
    mini = arr[0];
    maxi = arr[n-1];
    maxic = 0;
    minic = 0;
    for(i=0;i<n;i++) {
        if(arr[i] == mini) {
            minic++;
        }
    }
    for(i=n-1;i>=0;i--) {
        if(arr[i] == maxi) {
            maxic++;
        }
    }
    dif = maxi - mini;
    num = maxic*minic;
    if(minic == n || maxic == n) {
        num = (n*(n-1))/2;
    }
    cout << dif << " " << num << endl;
    return 0;
}
