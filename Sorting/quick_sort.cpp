/* 
**
**   author:  Omar_Hafez
**   created: 06/05/2022  09:31:03 PM
**
*/
 
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int partition(vector<int> &array, int start, int end) {
  int j = start;
  for(int i = start; i < end; i++) {
    if(array[i] <= array[end]) {
      swap(array[i], array[j]);
      j++;
    }
  }
  swap(array[end], array[j]);
  return j;
}

void QS(vector<int> &array, int start, int end) {
  if(end-start <= 0) return;
  int piv = partition(array, start, end);
  QS(array, start, piv-1);
  QS(array, piv+1, end);
}

void quick_sort(vector<int> &array, int n) {
  QS(array, 0, n-1);
}
