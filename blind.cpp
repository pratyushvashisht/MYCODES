#include<iostream>
using namespace std;

const int N = 0;


string blind(string a){
  string ans = "";
  int upper = 15;
  int lower = 0;
  int cnt = 0;
  for(auto& x : a){
    if(cnt == 4){
      cnt = 0;
      ans += 'a' + upper;
      upper = 15;
      lower = 0;
    }
    int mid = lower + (upper -lower)/2;
    if(x == '0'){
      upper = mid;
      cnt++;
    }
    else{
      lower = mid;
      cnt++;
    }
  }
  ans += 'a' + upper;
  return ans ;
}

void solve(){
  string a;
  cin>>a;
  string ans = blind(a);
  cout<<ans;
}

int main(){
  solve();


  return 0;
  }
