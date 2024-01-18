#include <bits/stdc++.h>
using namespace std;

void fun(string s){
    set<char> st;
    int cnt = 0;
    int ans = INT_MIN;
    for(int i=0 ; i<s.size() ; i++){
        if(st.find(s[i])!=st.end()){
            ans = max (ans , cnt);
            cnt = 0;
            st.clear();
        }
        st.insert(s[i]);
        cnt++;
    }
    ans = max(ans,cnt);
    cout<<ans;
}

int main(){
    string s;
    cin>>s;
    fun(s);
    return 0;
}