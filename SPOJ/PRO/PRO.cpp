#include <iostream>
#include <algorithm>

using namespace std;

long long int arr;

int main() {
    long long int n,i,k,p,q,j,sum,min1,min2,max1,max2,mini,maxi,prev,next;
    p = 0;
    q = 0;
    sum = 0;
    cin >> n;
    max2 = -1;
    min2 = 100005;
    max1 = -1;
    min1 = 100005;
    for(i=0;i<n;i++) {
        cin >> k;
        prev = min2;
        next = max2;
        max2 = -1;
	    min2 = 100005;
	    max1 = -1;
	    min1 = 100005;
        for(j=q;j<q+k;j++) {
            cin >> arr;
            if(arr > max1) {
                max2 = max1;
                max1 = arr;
            }
            else
            if(arr > max2 && arr < max1) {
                max2 = arr;
            }
            if(arr < min1) {
                min2 = min1;
                min1 = arr;
            }
            else
            if(arr < min2 && arr > min1) {
                min2 = arr;
            }
        }
        maxi = max1>next?max1:next;
        mini = min1<prev?min1:prev;
        sum = sum + maxi - mini;
        if(maxi == max1) {
        	next = max2;
        }
        else {
        	next = max1;
        }
        if(mini == min1) {
        	prev = min2;
        }
        else {
        	prev = min1;
        }
    }
    cout << sum << endl;
    return 0;
}
