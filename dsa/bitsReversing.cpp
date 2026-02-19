#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        uint32_t revBit(uint32_t nums){
            uint32_t rev = 0;
            
            for(int i = 0; i<32; i++){
                rev = rev<<1; // for shifting one time in left site bits
                rev = rev | (nums & 1); // for logically to converting all bit in to reverse 
                nums = nums>>1; // for right shifting one time the bits 
            }
            return rev; 
        }

};

int main(){
    Solution T;
    uint32_t nums;
    cout<<"Enter the number : ";
    cin>>nums;
    cout<<T.revBit(nums)<<endl; // Are occuring in the error 
    
    return 0;
}