#include <iostream>

using namespace std;

int main() {
    int t,n,i;
    double sum,ang;
    cin >> t;
    while(t--) {
        cin >> n;
        sum = 0;
        for(i=0;i<n;i++) {
            cin >> ang;
            sum = sum + ang;
        }
        if(sum == double(180*(n-2))) {
            cout << "POSSIBLE" << endl;
        }
        else {
            cout << "IMPOSSIBLE" << endl;
        }
    }
    return 0;
}
