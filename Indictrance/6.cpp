#include <bits/stdc++.h>
using namespace std;

void bs(vector<int> nums  , int target){
    int s=0;
    int e=nums.size()-1;
    int mid = (s+e)/2;
    while(s<e){
        if(nums[mid]==target){
            cout<<mid;
        }
        else if(nums[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
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
    int target = 1;
    cin>>target;
    bs(arr, target);
    return 0;
}