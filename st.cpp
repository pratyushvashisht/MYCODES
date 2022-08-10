#include<bits/stdc++.h>
using namespace std;

const int N = 0;


int mln = 0;

int lengthOfLongestSubstring(string s) {
       sort(s.begin(),s.end());

       int i = 0;
       int mln = 0;
       string temp = "";
       while(i < s.length()-1){
           if(temp.find(s[i]) == string::npos){
               temp += s[i];
           }
           else{
             int c = temp.length();
               mln = max(mln,c);
               temp ="";
           }
           i++;

       }

       return mln;

   }


int main(){
  string a = "hello";
  string b = "e";
  cout<<binary_search(a.begin(),a.end(),b)<<endl;
  cout<<string::npos;



  return 0;
  }
