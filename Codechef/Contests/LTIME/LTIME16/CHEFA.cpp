#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t,n,sum,i,arr[100005];
	cin >> t;
	while(t--) {
		cin >> n;
		for(i=0;i<n;i++) {
			cin >> arr[i];
		}
		sort(arr,arr+n);
		sum = 0;
		for(i=(n-1);i>=0;i--) {
			if(n%2 != 0) {
				if(i%2 == 0) {
					sum = sum + arr[i];
				}
			}
			else {
				if(i%2 == 1) {
					sum = sum + arr[i];
				}
			}
		}
		cout << sum << endl;
	}
    return 0;
}
