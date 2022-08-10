#include<bits/stdc++.h>
using namespace std;

const int N = 0;
int main(){
  char a[] = "heloo world";
  char *ptr = strtok(a," ");
  while(ptr){
    cout<<ptr<<endl;
    ptr= strtok(NULL," ");
  }


  return 0;
  }
