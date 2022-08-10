#include <iostream>
using namespace std;


inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}

int main(){
	debugMode();
	int n;cin>>n;
	cout<<n+1;


	return 0;
}
