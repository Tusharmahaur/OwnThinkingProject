//time complexity is O(n)
#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        vector<int> contiguousManner(vector<int>&nums){
            int sum = 0;
            vector<int> contiSum;
            for(int i = 0; i<nums.size(); i++){
                sum += nums[i];
                contiSum.push_back(sum);
            }
            return contiSum;
        }
};


int main(){
    Solution T;
    vector <int> nums = {1,2,4,5,7,36,14};
    
    vector<int> addContiguous = T.contiguousManner(nums);

    for(int val: addContiguous){
        cout<<val<<" ";  
    }    

    return 0;
}