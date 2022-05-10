/* 
**
**   author:  Omar_Hafez
**   created: 06/05/2022  09:31:03 PM
**
*/
 
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &array, int start1, int end1, int start2, int end2) {
  int tmp[end1-start1+end2-start2+2];
  if(start1 >= end1 || start2 >= end2) return;
  int j = start2, i = start1;
  int ind = 0;
  while(i < end1 && j < end2) {
    if(array[i] > array[j]) {
      tmp[ind] = array[j];
      j++;
    } else {
      tmp[ind] = array[i];
      i++;
    }
    ind++;
  }
  while(i < end1) {
    tmp[ind] = array[i];
    i++;
    ind++;
  }
  while(j < end2) {
    tmp[ind] = array[j];
    j++;
    ind++;
  }
  ind = 0;
  for(int i = start1; i < end1; i++) {
    array[i] = tmp[ind];
    ind++;
  }
  for(int i = start2; i < end2; i++) {
    array[i] = tmp[ind];
    ind++;
  }
}

void MS(vector<int> &array, int start, int end) {
  if(start >= end-1) return;
  int mid = (start+end-1)/2+1;
  MS(array, start, mid);
  MS(array, mid, end);
  merge(array, start, mid, mid, end);
}

void merge_sort(vector<int> &array, int n) {
  MS(array, 0, n);
}
