#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        //check array is shorted or not 
        bool isSorted(vector<int> arr, int n){
            if(n == 0 || n == 1) return true;

            return arr[n-1] >= arr[n-2] && isSorted(arr,n-1);
            //that are more efficient way to written the this type syntax vise versa the can write 
            //return isSorted(arr,n-1) && arr[n-1]>=arr[n-2]; that less afficient way to written syntax 
        }

};

int main(){
    Solution T;
    vector<int> nums = {1,2,3,4,5};

    if(T.isSorted(nums,nums.size())){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }    
    return 0;
}