//time complexity is O(n)
#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        vector<double> contiguousManner(vector<double>&nums){
            double prod = 1;
            vector<double> contiProd;
            for(int i = 0; i<nums.size(); i++){
                prod *= nums[i];
                contiProd.push_back(prod);
            }
            return contiProd;
        }
};


int main(){
    Solution T;
    vector <double> nums = {1,2,3,4,5,6,7,8,9};
    
    vector<double > addContiguous = T.contiguousManner(nums);

    for(int val: addContiguous){
        cout<<val<<" ";  
    }    

    return 0;
}