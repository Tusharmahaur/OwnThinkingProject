#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        double findMedian(vector<int>& nums1, vector<int>&nums2){
            
            for(int i = 0; i<nums2.size(); i++){
                nums1.push_back(nums2[i]);
            }
            
            int st = 0, end = nums1.size()-1;
            int mid = st + (end -st)/2;

            if(nums1.size()/2 != 0){
                return nums1[mid];
            }else{
                return (nums1[mid]+nums1[mid+1])/2;
            }
        }

        int search(vector<int>& nums1){
            int st = 0, end = nums.size()-1;

            while(st<= end){
                int mid = st+(end-st)/2;
                    if(nums[mid] == tar){
                    return mid;
                }

            if(nums[st]<=nums[mid] ){
                //for left sorted hone ka 
                if(nums[st]<= tar && tar<= nums[mid]){
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }else{
                //for right sorted hone 
                if(nums[mid]<= tar && tar<= nums[end]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
        }
        return -1;

    }

};

int main(){
    Solution T;
    vector<int> nums1 = {1,2,4};
    vector<int> nums2 = {3};
    cout<<T.findMedian(nums1,nums2)<<endl;
    return 0;
}