#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maximumSumOf_Row(vector<vector<int>> &arr){
        int maxSum = INT_MIN;
        
        for(int i = 0; i<3 ; i++){
            int sum = 0;
            for(int j =0 ; j<3 ; j++){
                sum += arr[i][j];
            }
            maxSum = max(maxSum,sum);
        }
        return maxSum;

    }    

};

int main(){
    Solution T;
    vector<vector<int>> nums = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout<<"your maxi row sum = "<<T.maximumSumOf_Row(nums)<<endl;
    return 0;
}