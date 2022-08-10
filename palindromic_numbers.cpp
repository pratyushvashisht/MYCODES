#include<iostream>
using namespace std;

const int N = 0;

int solve(string a){
  int ans = 0;
  if(a.length() % 2 == 0){
    int mid1 = (a.length()-1)/2;
    int mid2 = mid1 + 1;
    while(mid1 >= 0 && mid2 <a.length()){
      int left = a[mid1] - '0';
      int right = a[mid2] - '0';

      if(left == right){
        mid1--;mid2++;
      }
      else{
        if(left > right){
          ans += 10*(a.length()-mid1-1) * (left-right);

        }else{
          ans += 10*(a.length()-mid2-1) * (right-left);
        }
      }
    }
  }
  else{
    int mid1 = a.length()/2 -1;
    int mid2 = mid1 + 2;
    while(mid1 >= 0 && mid2 <a.length()){
      int left = a[mid1] - '0';
      int right = a[mid2] - '0';

      if(left == right){
        mid1--;mid2++;
      }
      else{
        if(left > right){
          ans += 10*(a.length()-mid1-1) * (left-right);

        }else{
          ans += 10*(a.length()-mid2-1) * (right-left);
        }
      }
    }
  }
  return ans;
}

int main(){
  string a = "1023";
  cout<<solve(a);


  return 0;
  }
