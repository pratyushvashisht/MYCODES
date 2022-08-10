#include<bits/stdc++.h>
using namespace std;

const int N = 0;

vector<vector<int>> ans;

void ss(vector<int>& nums,vector<int>& a,int i){
  if(i == nums.size())
  ans.push_back(a);

  for(int j = i;j<nums.size();j++){
    a.push_back(nums[j]);
    ss(nums,a,j+1);
    a.pop_back();
  }
}



int main(){
  vector<int> v = {1,2,3};
  vector<int> a;
  ss(v,a,0);
  for(auto& x : ans){
    for(auto& y: x){
      cout<<y<<" ";
    }
    cout<<endl;
  }

  return 0;
  }
