// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         void printSubsets(vector<int> &arr , vector<int> &ans, int i){
//             if(i == arr.size()){
//                 cout<<"[ ";
//                 for(int val : ans){
//                     cout<<val<<",";
//                 }
//                 cout<<"]"<<"   ";
//                 return ;
//             }

//             //inclusion case 
//             ans.push_back(arr[i]);
//             printSubsets(arr,ans,i+1);

//             ans.pop_back();//backtracking time 
            
//             //exclusion case 
//             printSubsets(arr,ans,i+1);
//     }
// };

// int main(){
//     Solution T;
//     vector<int> nums = {1,2,3};
//     vector<int> ans; // for the print subsets function 

//     T.printSubsets(nums,ans,0);
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int fib(int num){
            cout<<num<<"  ";
            if(num == 0 || num == 1) return 1;
            
            return  fib(num-1)+fib(num-2);
            cout<<num<<endl;
        }

};

int main(){
    Solution T;
    int nums = 3;
    cout<<T.fib(nums);
    
    return 0;
}