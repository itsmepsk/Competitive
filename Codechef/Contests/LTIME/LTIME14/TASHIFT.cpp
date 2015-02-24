#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main() {
    long long int n,i,m,counter,max,prev,max_c;
    string a,b;
    cin >> n;
    cin >> a;
    cin >> b;
    counter = 0;
    m = 0;
    max_c = 0;
    max = 0;
    for(i=0;i<n;i++) {
        if(b[i] == a[m]) {
            m++;
            counter++;
            prev = i-counter;
            if(counter > max) {
                max = counter;
                max_c = prev;
            }
        }
        else {
            m = 0;
            counter = 0;
        }
    }
    cout << max_c+1 << endl;
    return 0;
}
