#include <iostream>
#include <vector>
using namespace std;


class Solution{
    public:
        int binarySearch(vector<int> nums,int target){
            int st = 0, end = nums.size()-1;
                        
            while(st<= end){
                int mid =(st+end)/2;

                if(target>nums[mid]){
                    st = mid+1;
                }else if(target<nums[mid]){
                    st = mid-1;
                }else{
                    return nums[mid];
                }
            }
            return -1;
        }


};

int main(){
    Solution T;
    vector<int> nums = {-1,0,3,4,5,9,12};
    int target = -1;
    cout<<"Your Target = "<<T.binarySearch(nums,target)<<endl;

    return 0;
}