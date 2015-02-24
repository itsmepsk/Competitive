#include <iostream>
#include <cstring>

using namespace std;

long long int arr[252][252],brr[252][252],crr[100000],drr[100000];;

int main() {
    long long int n,m,i,j,counter,count;
    while(1) {
        cin >> n >> m;
        if(n == 0 && m == 0) {
            break;
        }
        else {
        	memset(arr,0,sizeof(arr));
        	memset(brr,0,sizeof(brr));
        	memset(crr,0,sizeof(crr));
        	memset(drr,0,sizeof(drr));
            for(i=1;i<=n;i++) {
                for(j=1;j<=m;j++) {
                    cin >> arr[i][j];
                }
            }
            counter = 1;
            for(i=1;i<=n;i++) {
                for(j=1;j<=m;j++) {
                    if(arr[i][j] == 1) {
                        if(arr[i-1][j] == 0 && arr[i+1][j] == 0 && arr[i][j-1] == 0 && arr[i][j+1] == 0) {
                            brr[i][j] = counter++;
                            //crr[brr[i][j]]++;
                        }
                        else
                        if(arr[i-1][j] != 0 || arr[i+1][j] != 0 || arr[i][j-1] != 0 || arr[i][j+1] != 0) {
                            if((brr[i-1][j] == 0 && brr[i+1][j] == 0 && brr[i][j-1] == 0 && brr[i][j+1] == 0)) {
                                brr[i][j] = counter++;
                                //crr[brr[i][j]]++;
                            }
                            else {
                                if(arr[i-1][j] != 0) {
                                    brr[i][j] = brr[i-1][j];
                                    //crr[brr[i][j]]++;
                                }
                                if(arr[i][j-1] != 0) {
                                    brr[i][j] = brr[i][j-1];
                                    //crr[brr[i][j]]++;
                                }
                            }
                        }
                    }
                }
            }
            for(i=n;i>=1;i--) {
                for(j=m;j>=1;j--) {
                    if(brr[i-1][j] != 0 && brr[i-1][j] < brr[i][j]) {
                        brr[i][j] = brr[i-1][j];
                    }
                    if(brr[i][j-1] != 0 && brr[i][j-1] < brr[i][j]) {
                        brr[i][j] = brr[i][j-1];
                    }
                    if(brr[i+1][j] != 0 && brr[i+1][j] < brr[i][j]) {
                        brr[i][j] = brr[i+1][j];
                    }
                    if(brr[i][j+1] != 0 && brr[i][j+1] < brr[i][j]) {
                        brr[i][j] = brr[i][j+1];
                    }
                    //crr[brr[i][j]]++;
                }
            }
            for(i=1;i<=n;i++) {
                for(j=m;j>=1;j--) {
                    if(brr[i-1][j] != 0 && brr[i-1][j] < brr[i][j]) {
                        brr[i][j] = brr[i-1][j];
                    }
                    if(brr[i][j-1] != 0 && brr[i][j-1] < brr[i][j]) {
                        brr[i][j] = brr[i][j-1];
                    }
                    if(brr[i+1][j] != 0 && brr[i+1][j] < brr[i][j]) {
                        brr[i][j] = brr[i+1][j];
                    }
                    if(brr[i][j+1] != 0 && brr[i][j+1] < brr[i][j]) {
                        brr[i][j] = brr[i][j+1];
                    }
                    //crr[brr[i][j]]++;
                }
            }
            for(i=n;i>=1;i--) {
                for(j=1;j<=m;j++) {
                    if(brr[i-1][j] != 0 && brr[i-1][j] < brr[i][j]) {
                        brr[i][j] = brr[i-1][j];
                    }
                    if(brr[i][j-1] != 0 && brr[i][j-1] < brr[i][j]) {
                        brr[i][j] = brr[i][j-1];
                    }
                    if(brr[i+1][j] != 0 && brr[i+1][j] < brr[i][j]) {
                        brr[i][j] = brr[i+1][j];
                    }
                    if(brr[i][j+1] != 0 && brr[i][j+1] < brr[i][j]) {
                        brr[i][j] = brr[i][j+1];
                    }
                    //crr[brr[i][j]]++;
                }
            }
            for(i=1;i<=n;i++) {
                for(j=1;j<=m;j++) {
                    if(brr[i-1][j] != 0 && brr[i-1][j] < brr[i][j]) {
                        brr[i][j] = brr[i-1][j];
                    }
                    if(brr[i][j-1] != 0 && brr[i][j-1] < brr[i][j]) {
                        brr[i][j] = brr[i][j-1];
                    }
                    if(brr[i+1][j] != 0 && brr[i+1][j] < brr[i][j]) {
                        brr[i][j] = brr[i+1][j];
                    }
                    if(brr[i][j+1] != 0 && brr[i][j+1] < brr[i][j]) {
                        brr[i][j] = brr[i][j+1];
                    }
                    crr[brr[i][j]]++;
                }
            }
            counter = 0;
            for(i=1;i<63010;i++) {
                    if(crr[i] != 0) {
                        counter++;
                    }
                drr[crr[i]]++;
            }

            cout << endl;
            cout << endl;
            for(i=1;i<=n;i++) {
                for(j=1;j<=m;j++) {
                    cout << brr[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;

            cout << counter << endl;
            for(i=1;i<63010;i++) {
                if(drr[i] != 0) {
                    cout << i << " " << drr[i] << endl;
                }
            }
        }
    }
    return 0;
}
