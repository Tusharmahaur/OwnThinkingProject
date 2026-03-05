#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> fnums(vector<int> &nums){
            vector<int> ans;
            int st = 0, end = nums.size();

            while(st < end){
                if(nums[st] == nums[end]){
                    ans.push_back(end);

                }
                st++;
                end--;
            }
            
            return ans;
        }

};

int main(){
    Solution T;
    vector<int> nums = {4,3,2,5,4,6,4};
    vector<int> ans = T.fnums(nums);
    for(int v: ans){
        cout<<v<<" ";
    }
    return 0;
}   