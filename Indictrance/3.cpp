#include <bits/stdc++.h>
using namespace std;

void fun(string s){
    vector<string> v;
    string temp = "";
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]==' '){
            v.push_back(temp);
            temp = "";
        }
        temp+=s[i];
    }

    unordered_map<string,int> mp;
    for(int i=0 ; i<v.size() ; i++){
        mp[v[i]]++;
    }
    for(auto it : mp){
        cout<<it.first<<"->"<<it.second<<" ";
    }
}

int main(){
    string s;
    cin >> s;
    fun(s);
    return 0;
}