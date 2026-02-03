//time complexity = O(n) so not a optimum ways to solve this question so try another ways

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution{
//     public: 
//         //member function 
//         int singleNumber(vector<int>&nums){
//             int ans = 0;
//             for(int val: nums){
//                 ans = ans^val;
//             }
//             return ans;
//         }
// };

// int main(){
//     vector <int> nums = {1,2,4,3,2,3,1}; 
//     Solution T;
//     cout<<"Your Unique number is : "<<T.singleNumber(nums)<<endl;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        //member function 
        int singleNumber(vector<int>&nums){
           int n = nums.size();
           if(n == 1) return nums[0];
           
           int st= 0, end = n-1;
           while(st<=end){
                int mid = st + (end-st)/2;

                if(mid == 0 && nums[0] != nums[1]) return nums[mid];
                if(mid == n-1 && nums[n-1] != nums[n-2]) return nums[mid];
 
                if(nums[mid-1] != nums[mid] and nums[mid] != nums[mid+1])return nums[mid];

                if(mid%2 == 0){//even case me
                    if(nums[mid-1]== nums[mid]){
                        end = mid-1;

                    }else{
                        st = mid+1;
                    }
                }else{//odd case
                    if(nums[mid-1]== nums[mid]){
                        st = mid+1; 
                    }else{
                        end = mid-1;
                    }
                }
           }
        }
};

int main(){
    vector <int> nums = {1,1,2,2,3,3,4,5,5}; 
    Solution T;
    cout<<"Your Unique number is : "<<T.singleNumber(nums)<<endl;
    return 0;
}