#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int insertion(vector<int> &nums,int tar){
            //use binary search algorithm for redusing time complexity for O(logn) 
            int st = 0,end = nums.size()-1;

            while(st<=end){
                int mid = st+(end-st)/2;
                if(tar>nums[mid]){//when target is greater than mid
                    st = mid+1;
                }else if(tar<nums[mid]){//when target is lesser than mid
                    end = mid-1;
                }else if(tar == nums[mid]){//when target is equal to equal to mid
                    return mid;
                }else{//when target is not exist in this array 
                    
                    if(nums[mid]>tar){
                        nums.push_back(tar);
                        swap(nums[mid-1],nums[end]);
                        return mid;
                    }else{
                        nums.push_back(tar);
                        swap(nums[mid+1],nums[end]);
                        return mid;
                    }
                }
            }    
        }
};


int main(){
    Solution T;
    int target;
    cout<<"Enter the target = ";
    cin>>target;
    vector<int> nums = {1,3,5,6,9};
    cout<<"Your index = "<<T.insertion(nums,target)<<endl;
    return 0;
}