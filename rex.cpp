#include<bits/stdc++.h>
using namespace std;

const int N = 0;
371
bool check(int n){
  int copy = n;
  int sum = 0;
  int size = 0;
  while(copy){
    size++;
    copy /= 10;
  }
  int copy1 = n;  
  while(copy1){
    int rem = copy1 % 10;
    sum += pow(rem,size);
    copy1 /= 10;
  }
  return n == sum;
}



int main(){
  int n;cin>>n;
  if(check(n)){
    cout<<"True"<<endl;
  }else{
    cout<<"false"<<endl;
  }

  return 0;
  }
