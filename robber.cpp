#include<bits/stdc++.h>
using namespace std;

const int N = 0;




int ans(vector<int>& a,int j){
  //base cases
  if(j >= a.size()){
    return 0;
  }


  //recursice case
  int proper= INT_MIN;
  for(int i = j;i<a.size();i++){
    int op1 = a[i] + ans(a,i+2);
    proper = max(proper,op1);
  }

  return proper;
}

int main(){
  vector<int> a ={1,2,3,10,5};
  int k = ans(a,0);
  cout<<k;

  return 0;
  }
