#include <bits/stdc++.h>
using namespace std;

vector<int> fun(vector<int> arr){
    vector<int> ans;
    for(int i=0 ; i<arr.size() ; i++){
        if(arr[i]%2==0){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
int main(){
    int n ; // Size of Array
    vector<int> arr;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int> ans;
    ans = fun(arr);
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
}