#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> bubbleSort(vector<int>&nums){
            int max = INT_MIN;

            for(int i=0; i<nums.size(); i++){
                if(max<nums[i]){
                    max = nums[i];
                }
            }

            
            for(int i = 0; i<nums.size()-1; i++){
                for(int j= 0; j<nums.size()-i-1; j++){
                    if(nums[j]>nums[j+1]){
                        swap(nums[j],nums[j+1]);
                    }
                }
            }
            return nums;
        }

};

int main(){
    Solution T;
    vector<int> nums = {1,4,2,5,7,3};
    vector<int> sort = T.bubbleSort(nums);

    for(int val: sort){
        cout<<val<<" ";
    }
    return 0;
}