#include <bits/stdc++.h>
using namespace std;

void fun(vector<int> nums  , int target){
    vector<vector<int>> ans;
    for(int i=0 ; i<nums.size() ; i++){
        for(int j=i+1 ; j<nums.size() ; j++){
            if((nums[i]+nums[j])==target){
                vector<int> v = {nums[i] , nums[j]};
                ans.push_back(v);
            }
        }
    }
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i][0]<<","<<ans[i][1]<<endl;
    }
}
int main(){
    int n ; // Size of Array
    vector<int> arr;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int target = 10;
    cin>>target;
    fun(arr, target);
    return 0;
}