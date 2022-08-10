#include<bits/stdc++.h>
using namespace std;

const int N = 0;

string addBinary(string a, string b) {
        int i = a.length()-1,j = b.length()-1;
        string output = "";
        char carry = '0';
        while(i >= 0 && j >= 0){
            char c = a[i], d = b[j];
            if(carry == '0'){
                if(c == '0' && d == '0'){
                    output += "0";
                }
                else if((c == '1' && d == '0') || (c == '0' && d == '1')){
                    output += "1";
                }
                else if(c == '1' && d == '1'){
                    output += "0";
                    carry = '1';
                }
            }
            else{
                if(c == '0' && d == '0'){
                    output += "1";

                }
                else if((c == '1' && d == '0') || (c == '0' && d == '1')){
                    output += "0";
                    carry = '1';

                }
                else if(c == '1' && d == '1'){
                    output += "1";
                    carry = '1';
                }
            }

           i--;
            j--;

        }
        while(i >= 0){
            if(carry == '0'){
              output += a.substr(0,i+1);

            }else{
                 if(a[i] == '0'){
                    output += "1";

                }else{
                    output += "0";
                     carry = '1';
                }

            }
               i--;
           }

           while(j >= 0){
               if(carry == '0'){
                 output += b.substr(0,j+1);

               }else{
                    if(b[j] == '0'){
                       output += "1";

                   }else{
                       output += "0";
                        carry = '1';
                   }

               }
                  j--;
              }
        if(carry == '1');
        output += carry;


        reverse(output.begin(),output.end());
        return output;

    }



int main(){
  string a = "11";
  string b = "111";
  cout<<addBinary(a,b);

  return 0;
  }
