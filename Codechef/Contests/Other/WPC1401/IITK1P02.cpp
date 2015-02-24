#include <bits/stdc++.h>
using namespace std;

int arr[2][27] = {0};

int main() {
    int n,i,p,maxi,counter,index;
    string str;
    cin >> str;
    n = str.length();
    for(i=0;i<n;i++) {
        if(arr[0][str[i]-'a'+1] == 0) {
            arr[0][str[i]-'a'+1] = 1;
        }
    }
    counter = 1;
    for(i=1;i<n;i++) {
        if(str[i] == str[i-1]) {
            counter++;
        }
        else {
        	p = arr[1][str[i-1]-'a'+1];
            if(arr[1][str[i-1]-'a'+1] < counter) {
                arr[1][str[i-1]-'a'+1] = counter;
            }
            counter = 1;
        }
    }
    if(counter != 1) {
    	if(arr[1][str[i-1]-'a'+1] < counter) {
    		arr[1][str[i-1]-'a'+1] = counter;
    	}
    }
    maxi = -1;
    for(i=1;i<27;i++) {
        if(arr[1][i] > maxi) {
            maxi = arr[1][i];
            index = i;
        }
    }
    printf("%c\n",'a'+index-1);
    cout << maxi << endl;
    return 0;
}
