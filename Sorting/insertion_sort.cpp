/* 
**
**   author:  Omar_Hafez
**   created: 06/05/2022  09:31:03 PM
**
*/
 
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &array, int n) {
  for(int i = 1; i < n; i++) {
    for(int j = i-1; j >= 0 && array[j+1] < array[j]; j--) {
      swap(array[j], array[j+1]);
    } 
  }
}
