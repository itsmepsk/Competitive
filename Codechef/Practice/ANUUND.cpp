#include <bits/stdc++.h>
using namespace std;

vector < long long int > arr,brr,crr;
vector < long long int >::iterator it,jt;

int main() {

    long long int t,n,i,input,counter;
    cin >> t;
    while(t--) {

        counter = 0;
        arr = crr;
        brr = crr;
        scanf("%lld",&n);
        for (i=0;i<n;i++) {

            scanf("%lld",&input);
            arr.push_back(input);

        }

        sort(arr.begin(),arr.end());

        counter = 0;
        for (it = arr.begin(),jt = arr.end()-1;counter < n;) {

            if (counter%2 == 0) {

                brr.push_back(*it);
                it++;

            }
            else {

                brr.push_back(*jt);
                jt--;

            }
            counter++;

        }

        for (it = brr.begin();it != brr.end();it++) {

            printf("%lld ",*it);

        }
        printf("\n");
    }
return 0;
}
