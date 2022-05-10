/* 
**
**   author:  Omar_Hafez
**   created: 06/05/2022  09:31:03 PM
**
*/
 
#include <bits/stdc++.h>
using namespace std;

using ll = long long;


void selection_sort(vector<int> &array, int n) {
  for(int i = 0; i < n; i++) {
    for(int j = i+1; j < n; j++) {
      if(array[j] < array[i]) swap(array[j], array[i]);
    }
  }
}
