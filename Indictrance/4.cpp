#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
void fun(int i , vector<int> nums , vector<int>& temp ){
    if(temp.size()==3){
        ans.push_back(temp);
    }
    temp.push_back(nums[i]);
    fun(i+1 , nums , temp);
    temp.pop_back();
    fun(i+1 , nums , temp);

}

void permute(vector<int> nums){
    vector<int> temp;
    int i=0;
    fun(0 , nums , temp);
    for(int i=0 ; i<ans.size() ; i++){
        for(int j=0 ; j<ans[i].size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n ; // Size of Array
    vector<int> nums;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    permute(nums);
    return 0;
}