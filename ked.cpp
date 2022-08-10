#include<bits/stdc++.h>
using namespace std;

const int N = 0;
int main(){
  vector<int> a {1,2,-2,3,-4,5};
  int start = 0;
  int curr_max = INT_MIN;
  int curr_min = INT_MAX;
  for(int& i : a){
    start += i;
    curr_max = max(curr_max,max(i,start));
    curr_min = min(curr_min,min(i,start));
    start = max(curr_max,curr_min);
  }
  cout<<curr_max;
  cout<<curr_min;


  return 0;
  }
