#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {1,4,5,6};
    int max = INT_MIN;
    for(int i= 0; i<nums.size();i++){
        if(max<nums[i]){
            max = nums[i];
        }
    }
    cout<<max<<endl;
    return 0;
}