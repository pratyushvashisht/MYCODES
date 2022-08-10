#include<bits/stdc++.h>
using namespace std;

const int N = 0;
int main(){
  int n;cin>>n;
  vector<int> a;
  for(int i = 0;i<n;i++){
    int x;cin>>x;
    a.push_back(x);
  }
  int i = 0;
  int j = i+1;
  bool ans= false;
  int cnt = 0;
  while(j < a.size()){
    if(a[i] >= a[j]){
      int op1 = (a[i] + a[j])/2;
      int op2 = (a[i] +
    }
  }



  return 0;
  }
