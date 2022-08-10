#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> ans;

void act(vector<int>& a,int i,int j,vector<int> empty){
	//base case
	if(i >= a.size()){
    ans.push_back(empty);
    return;
  }

  if(j >= a.size()){
    return;
  }

	//recursive case

	act(a,i+1,j,empty);
  empty.push_back(a[i]);
	act(a,i+1,j+1,empty);


}

int main() {
	vector<int> a{3,2,1};
  vector<int> p;
	act(a,0,0,p);

	for(auto& x : ans){
    for(auto& y : x){

      cout<<y<<" ";
    }
    cout<<endl;

  }
	return 0;
}
