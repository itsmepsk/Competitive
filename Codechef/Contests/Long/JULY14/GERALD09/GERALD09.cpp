#include <iostream>

using namespace std;

int main() {
    int t,n,m,k,i,j,count;
    char arr[5] = {'G','C','A','T'};
    cin >> t;
    while(t--) {
        cin >> n >> m >> k;
        if(k <= n*m) {
            for(i=0;i<n;i++) {
                for(j=0;j<m;j++) {
                    cout << "A";
                }
                cout << endl;
            }
        }
        else {
            count = 1;
            for(i=0;i<n;i++) {
                for(j=0;j<m;j++) {
                    cout << arr[count%4];
                    count++;
                }
                cout << endl;
            }
        }
    }
    return 0;
}
