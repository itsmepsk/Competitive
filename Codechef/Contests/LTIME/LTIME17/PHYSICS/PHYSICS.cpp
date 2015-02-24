#include <bits/stdc++.h>
using namespace std;

vector < long long int > arr,brr;
vector < long long int >::iterator it;
long long int power[1000005];

long long int rPow(long long int n, long long int k) {
    if (k <= 0) return 1;
    return n * rPow(n, --k);
}

long long int binarySearch(long long int left,long long int right,double data) {
    long long int mid;
    while(left != right) {
        mid = (left + right)/2;
        if(arr[mid] >= data) {
            left = mid + 1;
        }
        else
        if(arr[mid] < data) {
            if(arr[mid+1] >= data) {
                return mid;
            }
            else {
                right = mid - 1;
            }
        }
    }
}

int main() {
    long long int t,n,z,f,p,i,j,k,sum,m,num,s;
    double x;
    cin >> t;
    while(t--) {
        cin >> n >> f;
        for(i=0;i<n;i++) {
            cin >> s;
            arr.push_back(s);
        }
        sort(arr.rbegin(),arr.rend());
        p = arr[0];
        for(i=0;z <= p;i++) {
        	z = rPow(f,i);
            power[i] = z;
        }
        i-=1;
        sum = 0;
        for(j=0;j<n-1;j++) {
            //m = 0;
            //for(k=0;k<i;k++) {
            	for(k=0;k<=i;k++) {
            		if(power[k] > arr[j]) {
            			m = k-1;
            			break;
            		}
            	}
                x = arr[j]/power[m];
                //it = upper_bound(arr.begin()+j+1,arr.end(),x);
                //p = it - arr.begin();
                //num = binarySearch(0,n,x);
                p = binarySearch(0,n-1,x);
                //num = (it - (arr.begin()+j));
                num = p - j;
                sum = sum + num;
               // m = num;
            //}
        }
        cout << sum << endl;
    }
}
