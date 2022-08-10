#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int candies(int input1,int input2,int input3[]){
  if(input2 == 0){
    return input3[0];
  }
  sort(input3,input3 + input1,greater<int>());
  return input3[input2-1];
}

int main(){
  int N,K;cin>>N>>K;
  int arr[N];
  for(int i = 0;i<N;i++){
    cin>>arr[i];
  }
  cout<<candies(N,K,arr);
  }
