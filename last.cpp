#include <bits/stdc++.h>
using namespace std;


int main(){
  vector<int> nums = {2,0,2,1,1,0};
  vector<int> freq = {0,0,0};
  for(int x : nums){
    freq[x]++;
  }
  for(int x : freq){
    cout<<x<<" ";
  }
  int i = 0;
  int k = 0;
  while(i < freq.size()){
      if(freq[i] > 0){
          nums[k++] = i;
          freq[i]--;
      }else{
          i++;
      }

    }
    cout<<endl;
    for(int x : nums){
      cout<<x<<" ";
    }



  }




  return 0;
}
