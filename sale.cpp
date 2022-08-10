#include<bits/stdc++.h>
using namespace std;

const int N = 0;



void solve(){
  int products,q;
  cin>>products>>q;
  vector<int> prices;
  for(int i = 0;i<products;i++){
    int x;cin>>x;
    prices.push_back(x);
  }
  sort(prices.begin(),prices.end(),greater<int>());
  while(q--){
    int x,y;
    cin>>x>>y;
    int ans=0;
    for(int i = x-1;i>=x-y;i--){
      ans += prices[i];
    }
    cout<<ans<<'\n';
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();


  return 0;
  }
