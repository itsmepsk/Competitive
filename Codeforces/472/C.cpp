#include <bits/stdc++.h>
using namespace std;

vector < pair <string ,string , int > > v1,v2;
vector < tuple <int, int ,string > > a,b;
int arr[100005],brr[100005] = {0};


int main() {
    int n,i,j,counter1,counter2,sum;
    char fname[1000000],lname[1000000];
    cin >> n;
    for(i=0;i<n;i++) {
        scanf("%s",fname);
        scanf("%s",lname);
        v1.push_back(tuple < string ,string ,int >(fname,lname,i+1));
        v2.push_back(tuple < string ,string ,int >(lname,fname,i+1));
        /*v3.push_back(tuple < string ,int >(fname,i+1));
        v3.push_back(tuple < string ,int >(lname,i+1));*/
    }
    for(i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(i=0;i<n;i++) {
    	a.push_back(tuple <int ,int ,string >(get<2>(v1[i]),i+1,get<0>(v1[i])));
    	b.push_back(tuple <int ,int ,string >(get<2>(v2[i]),i+1,get<0>(v2[i])));
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    //sort(v3.begin(),v3.end());
    /*
    for(i=0;i<n;i++) {
    	cout << get<0>(a[i]) << " " << get<1>(a[i]) << " " <<get<2>(a[i]) <<endl;
    }
	cout << endl;
    for(i=0;i<n;i++) {
    	cout << get<0>(b[i]) << " " << get<1>(b[i]) << " " <<get<2>(b[i]) <<endl;
    }
    */
    counter1 = 0;
    for(i=0;i<n;i++) {
    	sum = (n-get<1>(a[arr[i]-1])) + (n - get<1>(b[arr[i]-1]));
    	if(sum >= (n-i-1)) {
    		counter1++;
    	}
    }
    if(counter1 == n) {
    	cout << "YES" << endl;
    }
    else {
    	cout << "NO" << endl;
    }
    /*
    for(i=0;i<n;i++) {
    	cout << get<0>(v1[i]) << " " << get<1>(v1[i]) << " " <<get<2>(v1[i]) <<endl;
    }
	cout << endl;
    for(i=0;i<n;i++) {
    	cout << get<0>(v2[i]) << " " << get<1>(v2[i]) << " " <<get<2>(v2[i]) <<endl;
    }
    cout << endl;
    for(i=0;i<2*n;i++) {
    	cout << get<0>(v3[i]) << " " << get<1>(v3[i]) << endl;
    }
	cout << endl;
    counter1 = 0;
    for(i=0,j=0;i<2*n;i++,j++) {
    	if(brr[get<1>(v3[i])] == 0) {
    		if((get<1>(v3[i]) == arr[j])) {
    			counter1++;
                brr[arr[j]]++;
    		}
    	}
    	else {
            j--;
     	}
    }
    if(counter1 == n) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    */
    return 0;
}
