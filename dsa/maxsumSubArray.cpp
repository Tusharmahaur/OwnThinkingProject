// #include <iostream>
// #include <bits/stdc++.h>
// // #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         //return sum of sub array
//         int subArraySum(vector<int> &nums){
//             int maxSum = INT_MIN;
//             for(int st = 0; st<nums.size(); st++){
//                 int currSum = 0;
//                 for(int end = st; end<nums.size(); end++){
//                      currSum = currSum + nums[end];
//                     maxSum = max(currSum, maxSum);//function for comparing is greater than subarray
//                 }
//             } 
//             return maxSum;
//         }
// };

// int main(){
//     vector <int> nums  = {3,-4,5,4,-1,7,-8};
//     Solution T;
//     cout<<"\nYour maximum sum of Sub array = "<<T.subArraySum(nums)<<endl;
//     return 0;
// }


#include <iostream>
#include <bits/stdc++.h>
// #include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        //return sum of sub array
        int subArraySum(vector<int> &nums){
            int currSum = 0,maxSum = 0;

            for(int val: nums){
                currSum = currSum +val;
                maxSum = max(currSum, maxSum);
                if(currSum <0){
                    currSum = 0;
                }
            }
            return maxSum;
        }
};

int main(){
    vector <int> nums  = {3,7,-8};
    Solution T;
    cout<<"\nYour maximum sum of Sub array = "<<T.subArraySum(nums)<<endl;
    return 0;
}