#include <iostream>

using namespace std;

class Solution{
    public:
        vector<int> binarySorting(vector<int> nums){
            int i = 0, j = nums.size()-1;
            while(i<=j){
                int mid = i + (j-i)/2;
                if(nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1]){
                    
                }
            }
        }

};

int main(){
    Solution T;
    vector<int> nums = {1,2,4,5,7,3,5,6};
    
    return 0;
}