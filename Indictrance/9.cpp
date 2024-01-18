#include <bits/stdc++.h>
using namespace std;

string fun(vector<string> nums){
    sort(nums.begin() , nums.end());
    string s=nums[0];
    string t=nums[nums.size()-1];
    int i=0;
    int j=0;
    string temp = "";
    while(i<s.size() && j<t.size()){
        if(s[i]!=t[j]){
            break;
        }
        temp += s[i];
        i++;
        j++;
    }
    cout << temp;
}
int main(){
    int n ; // Size of Array
    vector<string> nums;
    for(int i=0 ; i<n ; i++){
        string x;
        cin>>x;
        nums.push_back(x);
    }
    fun(nums);
    return 0;
}