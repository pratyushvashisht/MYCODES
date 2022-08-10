#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int solve(int row,int col,int a[]){
  int sum1 = 0;
  //for row

  if(col == 1 && row > 1){
    for(int i = 0;i<row;i++){
      if(sum1 < a[i]){
        sum1 = a[i];
      }
    }
  }else{
    for(int i = 0;i<row*col;i+=col){
      int sum = a[i];
      for(int j = i+1;j<i+col;j++){
        sum += a[j];
      }
      sum1 = max(sum1,sum);
    }

  }

  int sum2 = 0;
  //for col
  if(row == 1 && col > 1){
    for(int i = 0;i<col;i++){
      if(sum2<a[i]){
        sum2 = a[i];
      }
    }
  }else{
    for(int i = 0;i<row;i++){
      int sum = a[i];
      for(int j = i+1;j<row*col;j+=row){
        sum += a[j];
      }
      sum2 = max(sum2,sum);
    }

  }

  return sum1 + sum2;

}

int main(){
  int a[] = {1,2,5,6};

  int row = 2;
  int col = 2;
  int ans = solve(row,col,a);
  cout<<ans;

  return 0;
  }
