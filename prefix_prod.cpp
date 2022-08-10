#include<bits/stdc++.h>
using namespace std;

const int N = 0;
int main(){
  vector<int> v = {2,3,-4,6,2,12};
  vector<int> prefix(v.size(),0);
  prefix[0] = v[0];
  for(int i = 1;i<v.size();i++){
    prefix[i] = prefix[i-1]*v[i];
  }
  for(int z : prefix){
    cout<<z<<" ";
  }
  cout<<endl;
  cout<<*max_element(prefix.begin(),prefix.end());


  return 0;
  }
