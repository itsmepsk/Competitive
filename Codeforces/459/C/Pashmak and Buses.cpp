#include <iostream>
#include <cmath>
using namespace std;

long long int arr[1005][1005];

int main() {
    long long int n,k,d,i,j,num,p,flag=0;
    cin >> n >> k >> d;
    p = 1;
    for(i=1;i<=d;i++) {
        p = p*k;
        if(p >= n) {
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        cout << "-1" << endl;
    }
    else {
        for(i=0;i<n;i++) {
            num = i;
            for(j=0;j<d;j++) {
                arr[j][i] = num%k + 1;
                num = num/k;
            }
        }
        for(i=0;i<d;i++) {
            for(j=0;j<n;j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
