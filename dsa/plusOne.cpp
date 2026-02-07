//brutforce approch 

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution{
//     public: 
//         vector<int> plusOne(vector<int> &nums){
//             vector<int> afterAdd;

//             unsigned long int integer = 0;
//             int st = 0, end = nums.size()-1, mid = st+(end-st)/2;
            
//             for(int i = 0; i<=end; i++){
//                 integer =(integer*10+nums[i]);
//                 nums[i] *= 10;
//             }

//             integer = integer +1;
                        
//             while(integer != 0){
//                 int temp = 0;
//                 temp = integer%10;
//                 integer /= 10;
//                 afterAdd.push_back(temp);
//             }

//             reverse(afterAdd.begin(),afterAdd.end());

//             return afterAdd;   
//         }
// };


// int main(){
//     Solution T;
//     vector<int> nums ={9,8,7,6,5,4,3,2,1,0};
//     vector<int> updateNums = T.plusOne(nums);
//     for(int val: updateNums){
//         cout<<val;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    vector<int> plusOne(vector<int>& digits) {
        // move backwards
        for (int i = digits.size() - 1; i >= 0; i--) {
            int num = digits[i] + 1;
            if (num == 10 && i != 0) {
                digits[i] = 0;
            }
            else {
                digits[i] = num;
                break;
            }
        }
        if (digits[0] == 10) {
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
    }
};

int main(){
    Solution T;
    vector<int> digits = {9,9};
    vector<int> time = T.plusOne(digits);
    for(int val: time){
        cout<<val;
    }
    return 0;
}