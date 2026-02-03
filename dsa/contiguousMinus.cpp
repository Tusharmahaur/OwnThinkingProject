#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        vector<int> minus(vector<int>&nums){
            
            vector<int> finalForm;
            int currMinus = 0;
            for(int i = 0; i<nums.size(); i++){
                currMinus = -currMinus-(nums[i]);
                finalForm.push_back(currMinus);
            }
            return finalForm;
        }
};

int main(){
    Solution T;
    vector<int> pass = {10,9,8,7,6,5,4,3,2,1,0};
    vector<int> subtraction = T.minus(pass);

    for(int val: subtraction){
        cout<<val<<" ";
    }
    return 0;
}