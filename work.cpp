#include<iostream>
using namespace std;

const int N = 0;

int WorkLeft(int work,int f1,int d1,int f2,int d2){
  return work - ((f1*d1)+(f2*d2));
}

int main(){
  int f1,f2,d1,d2,work;
  cin>>work>>f1>>d1>>f2>>d2;
  cout<<WorkLeft(work,f1,d1,f2,d2);



  return 0;
  }
