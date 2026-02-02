// //time complexity O(n) linear time complexity 
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution{
//     public: 
//         vector<int> proArray(vector<int>&nums){
//             int product = 1;
//             vector <int>prodArray;
            
//             for(int i = 0; i<nums.size();i++){
//                 product = product*nums[i];
//             }
            
//             for(int i = 0; i<nums.size(); i++){
//                 int temp = 0;
//                 temp = product/nums[i];
//                 prodArray.push_back(temp);
//             }
//             return prodArray;
//         }
// };

// int main(){
//     Solution T;
//     vector<int> nums = {1,2,3,4};
//     vector<int> productArray = T.proArray(nums);

//     for(int val: productArray){
//         cout<<val<<" ";
//     }
//     return 0;
// }


//Without using the division and time complexity O(n) and space complexity O(1)
#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        vector<int> proArray(vector<int>&nums){
            int n = nums.size();
            vector<int> ans(n,1);
                       
            //prefix
            for(int i=1; i<n; i++){
                ans[i] = ans[i-1]*nums[i-1];
                
            }
            
            int suffix = 1;
            //suffix
            for(int i = n-2; i>=0; i--){
                suffix = suffix*nums[i+1];
                ans[i] *= suffix;
            }
            return ans;
        }
};

int main(){
    Solution T;
    vector<int> nums = {1,2,3,4};
    vector<int> productArray = T.proArray(nums);

    for(int val: productArray){
        cout<<val<<" ";
    }
    return 0;
}