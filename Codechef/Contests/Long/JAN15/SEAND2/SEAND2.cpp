#include <bits/stdc++.h>
using namespace std;

long long int b[1000005];

int main() {
    long long int t,n,i,num,maxi,sum;
    string a,c,x;
    cin >> t;
    while(t--) {
        a = c;
        cin >> a;
        cin >> n;
        for(i=0;i<n;i++) {
            cin >> b[i];
        }
        if(a.length() <= 18) {
            num = 0;
            for(i=0;i<a.length();i++) {
                num = num + (a[i] - '0')*pow(10,i);
            }
            sum = 0;
            for (i=0;i<n;i++) {
                sum = sum + num%b[i];
            }
            maxi = sum;
            x = a;
            sort(a.rbegin(),a.rend());
            num = 0;
            for(i=0;i<a.length();i++) {
                num = num + (a[i] - '0')*pow(10,i);
            }
            sum = 0;
            for (i=0;i<n;i++) {
                sum = sum + num%b[i];
            }
            if (sum < maxi) {
                maxi = sum;
                x = a;
            }
            sort(a.begin(),a.end());
            num = 0;
            for(i=0;i<a.length();i++) {
                num = num + (a[i] - '0')*pow(10,i);
            }
            sum = 0;
            for (i=0;i<n;i++) {
                sum = sum + num%b[i];
            }
            if (sum < maxi) {
                maxi = sum;
                x = a;
            }
        }
        else {
            num = 0;
            for(i=0;i<18;i++) {
                num = num + (a[i] - '0')*pow(10,i);
            }
            sum = 0;
            for (i=0;i<n;i++) {
                sum = sum + num%b[i];
            }
            maxi = sum;
            x = a;
            sort(a.rbegin(),a.rend());
            num = 0;
            for(i=0;i<18;i++) {
                num = num + (a[i] - '0')*pow(10,i);
            }
            sum = 0;
            for (i=0;i<n;i++) {
                sum = sum + num%b[i];
            }
            if (sum < maxi) {
                maxi = sum;
                x = a;
            }
            sort(a.begin(),a.end());
            num = 0;
            for(i=0;i<18;i++) {
                num = num + (a[i] - '0')*pow(10,i);
            }
            sum = 0;
            for (i=0;i<n;i++) {
                sum = sum + num%b[i];
            }
            if (sum < maxi) {
                maxi = sum;
                x = a;
            }
        }
        //random_shuffle(a.begin(),a.end());
        //sort(a.rbegin(),a.rend());
        cout << a << endl;
    }
    return 0;
}
