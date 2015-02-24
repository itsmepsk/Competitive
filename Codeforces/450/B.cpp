#include <stdio.h>
#include <iostream>

using namespace std;

long long int arr[1000000] = {0};

int main() {
    long long int x,y,n,i,counter=0;
    cin >> x >> y;
    cin >> n;
    arr[0] = x;
    arr[1] = y;
    for(i=2;;i++) {
        arr[i] = arr[i-1] - arr[i-2];
        if(arr[i] == arr[1]) {
            counter = i+1;
            break;
        }
    }
    n--;
    n = n%counter;
    if(arr[n] < 0) {
        cout << arr[n]%1000000007+1000000007 << endl;
    }
    else {
       cout << arr[n]%1000000007 << endl;
    }
    return 0;
}
