#include <bits/stdc++.h>

using namespace std;

int main() {

    long long int t,i,counter,mini;
    string s,tmp;
    cin >> t;
    while(t--) {
        counter = 0;
        s = tmp;
        cin >> s;
        if (s[0] == '-') {
            for(i=2;i<s.length();i+=2) {
                if (s[i] != '-') {
                    counter++;
                }
            }
            for(i=1;i<s.length();i+=2) {
                if (s[i] != '+') {
                    counter++;
                }
            }
            mini = counter;
            counter = 0;
            for(i=0;i<s.length();i+=2) {
                if (s[i] != '+') {
                    counter++;
                }
            }
            for(i=1;i<s.length();i+=2) {
                if (s[i] != '-') {
                    counter++;
                }
            }
            if (counter < mini) {
                mini = counter;
            }
        }
        if (s[0] == '+') {
            for(i=2;i<s.length();i+=2) {
                if (s[i] != '+') {
                    counter++;
                }
            }
            for(i=1;i<s.length();i+=2) {
                if (s[i] != '-') {
                    counter++;
                }
            }
            mini = counter;
            counter = 0;
            for(i=0;i<s.length();i+=2) {
                if (s[i] != '-') {
                    counter++;
                }
            }
            for(i=1;i<s.length();i+=2) {
                if (s[i] != '+') {
                    counter++;
                }
            }
            if (counter < mini) {
                mini = counter;
            }
        }
        cout << mini << endl;
    }
    return 0;
}
