#include<bits/stdc++.h>
using namespace std;

const int N = 0;
void solve(){
  int t;cin>>t;

  while(t--){

    int n,h;
    cin>>n>>h;
    int m = h;
    string a;cin>>a;
    for(int i = 0;i<a.length();i++){
      if(a[i] == 'B'){
        int pos = h;
        for(int j = 0;j<h;j++){
          if(a[i + j] == 'B'){
            pos--;
          }
        }
        m = min(m,pos);
      }
    }
    cout<<m<<'\n';

  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();

  return 0;
  }
