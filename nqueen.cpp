#include<bits/stdc++.h>
using namespace std;

const int N = 0;
bool is_safe(int i,int j,vector<string>& board,int n){


       //for col
       for(int k = i;k>=0;k--){
           if('Q' == board[k][j]){
               return false;
           }
       }
       int row = i;
       int col = j;
       //forward diagonal
       while(row >= 0 && col < n){
           if(board[row][col] == 'Q'){
               return false;
           }
           row--;
           col++;
       }
       row = i;
       col = j;
       while(row >= 0 && col >= 0){
           if(board[row][col] == 'Q'){
               return false;
           }
           row--;
           col--;
       }
       return true;
   }
   void solve(int i,vector<string>& board,vector<vector<string>>& ans,int n){
       if(i == n){
           ans.push_back(board);
       }

       for(int k = 0;k<n;k++){
           if(is_safe(i,k,board,n)){
               board[i][k] = 'Q';
               solve(i+1,board,ans,n);
               board[i][k] = '.';
           }
       }
   }

int main(){
  int n = 4;
  string s(n,'.');
  vector<string> v(n,s);
  vector<vector<string>> ans;
  solve(0,v,ans,n);
  for(auto& x : ans){
    for(auto& y : x){
      cout<<y<<endl;
    }
  }

  return 0;
  }
