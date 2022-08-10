#include<bits/stdc++.h>
using namespace std;

const int N = 0;


void print(vector<int>& num,int i, int j,vector<int> ans){
  //base cases
  if(i >= num.size()){
    for(int x : ans){
      cout<<x<<" ";
    }
    cout<<endl;
    return;
  }



  print(num,i+1,j,ans);
  ans.push_back(num[i]);
  print(num,i+1,j+1,ans);

}

/*[]
  [1]
  [1 2]
  [1 3]

*/


int main(){
  vector<int> a = {1,2,3};
  vector<int> ans;
  print(a,0,0,ans);




  return 0;
  }
