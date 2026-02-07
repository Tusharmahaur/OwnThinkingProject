// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> n = {0,3,1,4,2,2,2,4,5,5};
//     sort(n.begin(),n.end());
//     for(int val: n){
//         cout<<val<<" ";
//     }
//     return 0;
// }

//using DNF = dutch national flag algorithm in linear complexity 

#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        void DNF(vector<int>&nums){
            int low = 0, mid = 0, high = nums.size()-1;

            while(mid<=high){
                if(nums[mid] == 0){
                    swap(nums[low],nums[mid]);
                    mid++;
                    low++;
                }else if(nums[mid]==1){
                    mid++;
                }else{
                    swap(nums[high],nums[mid]);
                    high--;
                }
            }   
        }
};

int main(){
    Solution T;
    vector<int> nums= {0,1,2,0,1,1,0,2,2,0,1,0,1,0,1,1};
    T.DNF(nums);
    
    for(int val:nums){
        cout<<val<<" ";
    }
  

    return 0;
}