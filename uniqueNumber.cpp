#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        //properties declaration 
        vector <int> nums = {1,2,4,5,3,2,3,1,4};

        //member function 
        int singleNumber(vector<int>&nums){
            int ans = 0;
            for(int val: nums){
                ans = ans^val;

            }
            return ans;
        }
}

int main(){
    Solution T;
    cout<<"Your Unique number is : "<<T.singleNumber()<<endl;
    return 0;
}