#include <iostream>
#include <algorithm>

using namespace std;

long long int comb(long long int a,long long int b) {
    if(b == 2) {
        return a*(a-1)/2;
    }
    else {
        return a*(a-1)*(a-2)/6;
    }
}

int main() {
    long long int n,arr[100005],i,j,count,counter;
    cin >> n;
    for(i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr+0,arr+n);
    counter = 0;
    for(i=0;i<n;i++) {
        count = 0;
        for(j=i;j<n;j++) {
            if(arr[j]%arr[i] == 0) {
                count ++;
            }
        }
        counter = counter + comb(count,2)*comb(n-count+2,3);
    }
    cout << counter << endl;
}
