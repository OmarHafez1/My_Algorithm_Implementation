/* 
**
**   author:  Omar_Hafez
**   created: 06/05/2022  09:31:03 PM
**
*/
 
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &array, int n) {
  for(int i = n-1; i > 0; i--) {
    for(int j = 0; j < i; j++) {
      if(array[j] > array[j+1]) swap(array[j], array[j+1]);
    }
  }
}
