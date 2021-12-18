#include <iostream>
#include <vector>
#include <string>
using namespace std;
void swap(char& a, char& b){
    char temp = a;
    a = b;
    b = temp;
}
void permute(string& s,int start,vector<string>& v){
    if(start == s.length()-1){
        v.push_back(s);
        return;
    }
    for(int i = start;i<s.length();i++){
        swap(s[i],s[start]);
        permute(s,start+1,v);
        swap(s[i],s[start]);
    }
}
int main(){
    string s ;
    getline(cin,s);
    vector <string> v;
    permute(s,0,v);
    for(string h: v){
        cout<<h<<endl;
    }
    cout<<v.size();
    return 0;
}
