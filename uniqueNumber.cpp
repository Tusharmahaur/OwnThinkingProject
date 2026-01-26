#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        //member function 
        int singleNumber(vector<int>&nums){
            int ans = 0;
            for(int val: nums){
                ans = ans^val;
            }
            return ans;
        }
};

int main(){
    vector <int> nums = {1,2,4,3,2,3,1}; 
    Solution T;
    cout<<"Your Unique number is : "<<T.singleNumber(nums)<<endl;
    return 0;
}