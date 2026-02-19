#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = 0, end = nums.size()-1;
        while(st<=end){
            int mid= st+(end-st)/2;

            if(nums[mid] == target){
                if(nums[mid] == nums[mid-1]){
                    return {mid-1,mid};
                }
                if(nums[mid] == nums[mid+1])
                    return {mid,mid+1};
            }else if(nums[mid]>target){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return {-1,-1};
    }

};

int main(){
    Solution T;
    vector<int> nums = {5,7,7,8,8,10};
    vector<int> ans = T.searchRange(nums,10);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}