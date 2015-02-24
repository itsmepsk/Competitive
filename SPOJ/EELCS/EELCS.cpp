#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

char A[100],B[100];
int lA,lB;

int max(int a,int b) {
    return a>=b?a:b;
}

int func(int a,int b) {
    if(a == lA || b == lB) {
    	return 0;
    }
    else
    if(A[a] == B[b]) {
    	return 1 + func(a+1,b+1);
    }
    else {
    	return max(func(a,b+1),func(a+1,b));
    }
}

int main() {
    int p;
    cin >> A;
    cin >> B;
    lA = strlen(A);
    lB = strlen(B);
   	p = func(0,0);
    cout << p << endl;
    return 0;
}
