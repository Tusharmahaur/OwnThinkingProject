#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findDuplicate(vector<int> & nums) {
        int st = 0, end = nums.size();
        
        while(st<end/2){
            cout<<nums[st]<<" ";
            if(nums[st] == nums[end]){
                return nums[st];
            }else {
                st++;
                end--;
            }
        }
        return nums[st];
    }

};

int main(){
    Solution T;
    vector<int> nums = {1,3,4,5,7,1};
    cout<<T.findDuplicate(nums)<<endl;
    return 0;
}