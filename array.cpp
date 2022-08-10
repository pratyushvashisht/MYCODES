#include<iostream>
using namespace std;

const int N = 0;
int main(){
  int arr[] = {1,2,3,4};
  int a = 1;
  int n = sizeof(arr)/sizeof(int);
  for(int i = 0;i<n;i++){
    a *= arr[i];
  }
  for(int i = 0;i<n;i++){
    arr[i] = a/arr[i];
  }

  for(int x : arr){
    cout<<x<<" ";
  }


  return 0;
  }
