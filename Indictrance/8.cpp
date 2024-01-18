#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    // sort(s.begin() , s.end() :: toLower);
    int i = 0;
    int j = str.size()-1;
    int flag = true;
    while(i<=j){
        if(str[i]!=str[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if(flag) cout<<"True";
    else cout<<"False";
    return 0;
}