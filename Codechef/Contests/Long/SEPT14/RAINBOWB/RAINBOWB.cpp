#include <bits/stdc++.h>
using namespace std;

long long int arr[7] = {0},brr[7] = {0};

int main() {
    long long int n,i,j,x,sum,m;
    cin >> n;
    if(n < 13) {
        cout << "0" << endl;
    }
    else
    if(n == 13) {
        cout << "1\n" << endl;
    }
    else {
        m = n - 13;
        m = m/2;
        sum = 0;
        for(i=1;i<=6;i++) {
        	arr[i] = (i+m);
        }
        for(i=0;i<=3;i++) {
            for(j=1;j<=6;j++) {
                if(arr[j]%2 == 0) {
                    arr[j] = arr[j]/2;
                    break;
            	}	
            }
        }
        for(i=0;i<=1;i++) {
            for(j=1;j<=6;j++) {
                if(arr[j]%3 == 0) {
                    arr[j] = arr[j]/3;
                    break;
            	}	
            }
        }   
        for(j=1;j<=6;j++) {
            if(arr[j]%5 == 0) {
                arr[j] = arr[j]/5;
                break;
        	}	
        }   
        sum = 1;
        for(i=1;i<=6;i++) {
            sum = ((sum%1000000007)*((arr[i])%1000000007))%1000000007;
        }
        cout << sum << endl;
    }
    return 0;
}
