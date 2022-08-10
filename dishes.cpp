#include<iostream>
#include <algorithm>
using namespace std;

const int N = 0;

int dishes(int input1,int arr[]){
  vector<int> next(input1,0);
  next[input1-1] = arr[input1-1];
  for(int i = input1-2;i>=0;i--){
    next[i] = next[i+1] + arr[i];
  }
  int cnt = 0;
  int sum = 0;
  while(){
    
  }

}

int main(){



  return 0;
  }
