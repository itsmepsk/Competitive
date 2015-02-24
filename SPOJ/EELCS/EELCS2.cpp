#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;
char A[100],B[100];
int lA,lB,arr[105][105];


int main() {
    int i,j,m;
    cin >> A;
    cin >> B;
    lA = strlen(A);
    lB = strlen(B);
    memset(arr,0,sizeof(arr));
    m = lB-1;
    for(i=0;i<=lA;i++) {
    	for(j=0;j<=lB;j++) {
    		if(i == 0 || j == 0) {
    			arr[i][j] = 0;
    		}
    		else
    		if(B[j-1] == A[i-1]) {
    			arr[i][j] = arr[i-1][j-1] + 1;
    		}
    		else {
    			arr[i][j] = arr[i-1][j]>=arr[i][j-1]?arr[i-1][j]:arr[i][j-1];
    		}
    	}
    }
    cout << arr[lA][lB] << endl;
    return 0;
}
