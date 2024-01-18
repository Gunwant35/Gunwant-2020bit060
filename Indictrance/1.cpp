#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello World";
    cin>>s;
    string temp = "";
    for(int i=s.size()-1 ; i>=0 ; i--){
        temp+=s[i];
    }
    s = temp;
    cout<<s;
    return 0;
}