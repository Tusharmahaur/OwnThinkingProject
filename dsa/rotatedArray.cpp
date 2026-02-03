#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int search(vector<int>&nums,int tar){
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

int main(){ Solution T;
    vector<int> nums= {-1,0,3,4,5,9,12};
    int tar = -1;
    cout<<"Your target is lies "<<T.search(nums,tar)<<" Index"<<endl;
    return 0;
}