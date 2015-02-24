#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t,n,i,f2,f3,count,arr[100005];
	cin >> t;
	while(t--) {
		cin >> n;
		for(i=0;i<n;i++) {
			cin >> arr[i];
		}
		f2 = 0;
		f3 = 0;
		count = 0;
		for(i=0;i<n;i++) {
			if(arr[i]%2 == 0) {
				f2 = 1;
			}
			else
			if(arr[i]%3 == 0) {
				f3 = 1;
			}
		}
		count = f2 + f3;
		cout << count << endl;
	}
    return 0;
}
