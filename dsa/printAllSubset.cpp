#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void printSubsets(vector<int> &arr , vector<int> &ans, int i){
            if(i == arr.size()){
                cout<<"[ ";
                for(int val : ans){
                    cout<<val<<",";
                }
                cout<<"]"<<"   ";
                return ;
            }
            //inclusion case 
            ans.push_back(arr[i]);
            printSubsets(arr,ans,i+1);

            ans.pop_back();//backtracking time 
            //exclude case 
            printSubsets(arr,ans,i+1);


        }
};

int main(){
    Solution T;
    vector<int> nums = {1,2,3};
    vector<int> ans; // for the print subsets function 
    T.printSubsets(nums,ans,0);
    return 0;
}