/* 
**
**   author:  Omar_Hafez
**   created: 07/05/2022  10:34:35 PM
**
*/
 
#include <bits/stdc++.h>
using namespace std;

int binary_search(int *arr, int n, int start, int end) {
  if(start > end) return -1;
  int mid = (start+end)/2;
  if(arr[mid] == n) return mid;
  if(arr[mid] < n) return binary_search(arr, n, mid+1, end);
  return binary_search(arr, n, start, mid-1);
}

