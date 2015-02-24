#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,m,i;
    string str;
    cin >> t;
    i = 1;
    while(i <= t) {
        cin >> m;
        cin >> str;
        str.erase(str.begin()+m-1);
        //str.erase(m-1,1);
        cout << i << " " << str << endl;
        i++;
    }
    return 0;
}
