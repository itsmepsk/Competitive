#include <bits/stdc++.h>
using namespace std;


long long int  _mergeSort(long long int arr[], long long int temp[], long long int left, long long int right);
long long int merge(long long int arr[], long long int temp[], long long int left, long long int mid, long long int right);


long long int mergeSort(long long int arr[], long long int array_size)
{
    long long int *temp = (long long int *)malloc(sizeof(long long int)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}


long long int _mergeSort(long long int arr[], long long int temp[], long long int left, long long int right)
{
  long long int mid, inv_count = 0;
  if (right > left)
  {

    mid = (right + left)/2;


    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);


    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}

long long int brr[1000005] = {0};

long long int merge(long long int arr[], long long int temp[], long long int left, long long int mid, long long int right)
{
  long long int i, j, k;
  long long int inv_count = 0;

  i = left; /* i is index for left subarray*/
  j = mid;  /* i is index for right subarray*/
  k = left; /* i is index for resultant merged subarray*/
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];


      inv_count = inv_count + (mid - i);
    }
  }


  while (i <= mid - 1)
    temp[k++] = arr[i++];


  while (j <= right)
    temp[k++] = arr[j++];


  for (i=left; i <= right; i++)
    arr[i] = temp[i];

  return inv_count;
}


int main(long long int argv, char** args) {
    long long int t,n,k,i,j,num,flag;
    cin >> t;
    for(j=1;j<=t;j++) {
        memset(brr,0,sizeof(brr));
        cin >> n >> k;
        long long int arr[n];
        flag = 0;
        for(i=0;i<n;i++) {
            cin >> arr[i];
            brr[arr[i]]++;
            if(brr[arr[i]] >= 2) {
                flag = 1;
            }
        }

    num = mergeSort(arr,n);
    //cout << num << endl;
    if(k <= num) {
        cout << "Case " << j << ": " << num-k << endl;
    }
    else {
        if(flag == 1) {
            cout << "Case " << j << ": 0" << endl;
        }
        else {
             cout << "Case " << j << ": " << (k-num)%2 << endl;
        }
    }
  }
  return 0;
}
