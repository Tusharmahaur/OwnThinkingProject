#include <iostream>
#include <vector>
using namespace std;

// class Solution{
//     public:
//         vector<int> insertion(vector<int> &nums,int tar){
//             //use binary search algorithm for redusing time complexity for O(logn) 
//             int st = 0,end = nums.size()-1;

//             while(st<=end){
//                 int mid = st+(end-st)/2;
//                 if(tar>nums[mid]){//when target is greater than mid
//                     st = mid+1;
//                 }else if(tar<nums[mid]){//when target is lesser than mid
//                     end = mid-1;
//                 }else if(tar == nums[mid]){//when target is equal to equal to mid
//                     return mid;
//                 }else{//when target is not exist in this array 
//                     if(nums[mid]>tar){
//                         nums.push_back(tar);
//                         swap(nums[mid-1],nums[end]);
//                         return mid;
//                     }else{
//                         nums.push_back(tar);
//                         swap(nums[mid+1],nums[end]);
//                         return mid;
//                     }
//                 }
//             }    
//         }
// };

class Solution {
    public:
        int insertion(vector<int>& nums, int target) {
            int st=0, end =nums.size()-1;
            int mid;

            if(target>nums[end]){
                return end;
            }

            while(st<=end){
                    mid=st+(end-st)/2;
                if(nums[mid]==target){  
                    return mid;
                }else if(target<nums[mid]){     
                end =mid-1;    
                }else{
                st=mid+1;        
                }
                
            }
            return  st;   
        }
    };


int main(){
    Solution T;
    int target;
    cout<<"Enter the target = ";
    cin>>target;
    vector<int> nums = {1,3,5,6};
    cout<<"Your index = "<<T.insertion(nums,target)<<endl;
    
    return 0;
}