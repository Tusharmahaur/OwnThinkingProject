// #include <iostream>
// #include <vector>
// using namespace std;


// class Solution{
//     public:
//         int binarySearch(vector<int> nums,int target){
//             int st = 0, end = nums.size()-1;
                        
//             while(st<= end){
//                 int mid =(st+end)/2;

//                 if(target>nums[mid]){
//                     st = mid+1;
//                 }else if(target<nums[mid]){
//                     st = mid-1;
//                 }else{
//                     return mid;
//                 }
//             }
//             return -1;
//         }


// };

// int main(){
//     Solution T;
//     vector<int> nums = {-1,0,3,4,5,9,12};
//     int target = 4;
//     cout<<"Your Target = "<<T.binarySearch(nums,target)<<endl;

//     return 0;
// }



#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int binarySearch(vector<int> nums,int target){
    int st = 0, end = nums.size()-1;
                
    while(st<= end){
        int mid =st+(end-st)/2;

        if(target>nums[mid]){
            st = mid+1;
        }else if(target<nums[mid]){
            end = mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){
       
        vector<int> nums = {1,2,3,5,9,12};//odd case
        int target = 1;
        cout<<"Your index = "<<binarySearch(nums,target)<<endl;
    
        return 0;
    }
    

//to avoid overflow conditions like 
//if mid = (st+end)/2 ; but worst case scenario st = INT_MAX, end = INT_MAX; than 
//mid = (INT_MAX + INT_MAX)/2; that mid exeed because they have not sufficient container for 
//so How to resolve this problem to use different form of this equation 
//mid = st + (end-st)/2; that formula to resolve this problem

//binary Search using recursion 

// #include <iostream>
// #include <vector>
// using namespace std;

// int binarySearch(vector<int>&nums,int tar, int st, int end){
//         if(st <= end){
//             int mid = st+(end-st)/2;

//             if(tar>nums[mid]){
//                 return binarySearch(nums,tar,mid+1,end);
//             }else if(tar<nums[mid]){
//                 return binarySearch(nums,tar,st,mid-1);
//             }else{
//                 return mid;
//             }
//         }
//         return -1;
//     }

// int main(){
//     vector<int> nums = {-1,0,3,4,5,9,12};
//     int tar= 4;

//     cout<<binarySearch(nums,tar)<<endl;
//     return 0;
// }