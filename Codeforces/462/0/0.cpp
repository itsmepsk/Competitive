#include <bits/stdc++.h>
using namespace std;

string arr[101],brr[101];

int main() {
    int n,i,j,sum,counter,flag;
    cin >> n;
    for(i=0;i<n;i++) {
        arr[i] = brr[i];
        cin >> arr[i];
    }
    counter = 0;
    flag = 0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
           // if(arr[i][j] == 'x') {
                sum = 0;
                counter++;
                if(i == 0) {
                    if(j == 0) {
                        if(arr[i][j+1] == 'o') {
                            sum++;
                        }
                        if(arr[i+1][j] == 'o') {
                            sum++;
                        }
                        if(sum%2 != 0) {
                            flag = 1;
                            break;
                        }
                    }
                    else
                    if(j == n-1) {
                        if(arr[i][j-1] == 'o') {
                            sum++;
                        }
                        if(arr[i+1][j] == 'o') {
                            sum++;
                        }
                        if(sum%2 != 0) {
                            flag = 1;
                            break;
                        }
                    }
                    else {
                        if(arr[i][j-1] == 'o') {
                            sum++;
                        }
                        if(arr[i][j+1] == 'o') {
                            sum++;
                        }
                        if(arr[i+1][j] == 'o') {
                            sum++;
                        }
                        if(sum%2 != 0) {
                            flag = 1;
                            break;
                        }
                    }
                }
                else
                if(i == n-1) {
                    if(j == 0) {
                        if(arr[i][j+1] == 'o') {
                            sum++;
                        }
                        if(arr[i-1][j] == 'o') {
                            sum++;
                        }
                        if(sum%2 != 0) {
                            flag = 1;
                            break;
                        }
                    }
                    else
                    if(j == n-1) {
                        if(arr[i][j-1] == 'o') {
                            sum++;
                        }
                        if(arr[i-1][j] == 'o') {
                            sum++;
                        }
                        if(sum%2 != 0) {
                            flag = 1;
                            break;
                        }
                    }
                    else {
                        if(arr[i][j-1] == 'o') {
                            sum++;
                        }
                        if(arr[i][j+1] == 'o') {
                            sum++;
                        }
                        if(arr[i-1][j] == 'o') {
                            sum++;
                        }
                        if(sum%2 != 0) {
                            flag = 1;
                            break;
                        }
                    }
                }
                else {
                    if(j == 0) {
                        if(arr[i-1][j] == 'o') {
                            sum++;
                        }
                        if(arr[i+1][j] == 'o') {
                            sum++;
                        }
                        if(arr[i][j+1] == 'o') {
                            sum++;
                        }
                        if(sum%2 != 0) {
                            flag = 1;
                            break;
                        }
                    }
                    else
                    if(j == n-1) {
                        if(arr[i-1][j] == 'o') {
                            sum++;
                        }
                        if(arr[i+1][j] == 'o') {
                            sum++;
                        }
                        if(arr[i][j-1] == 'o') {
                            sum++;
                        }
                        if(sum%2 != 0) {
                            flag = 1;
                            break;
                        }
                    }
                    else {
                        if(arr[i-1][j] == 'o') {
                            sum++;
                        }
                        if(arr[i+1][j] == 'o') {
                            sum++;
                        }
                        if(arr[i][j+1] == 'o') {
                            sum++;
                        }
                        if(arr[i][j-1] == 'o') {
                            sum++;
                        }
                        if(sum%2 != 0) {
                            flag = 1;
                            break;
                        }
                    }
                }
           // }
        }
        if(flag == 1) {
            break;
        }
    }
    if(flag == 1) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
    return 0;
}
