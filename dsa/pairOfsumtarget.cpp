// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[] = {2,7,11,15,4,5,6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//         int pairsum;
//         cout<<"Enter the Target : ";
//         cin>>pairsum;

//         sort(arr,arr+n);
        
//         //after ascending 
//         for(int val: arr){
//             cout<<val<<" ";
//         }
//         cout<<endl;

//         for(int i = 1; i<=7; i++){
//             arr[i] = arr[i] + arr[i+1];
//             if(arr[i] == pairsum){
//                 cout<<"your Target is lies ("<<i<<","<<i+1<<") index. "<<endl;
//                 break;
//             }
//         }
    
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> pairsum(vector<int> nums,int target){
//     int n = nums.size();

//     int i = 0, j = n-1;

//     while(i<j){
//         int pairsum = nums[i] +nums[j];
//         if(pairsum>target){
//             j--;
//         }else if(pairsum<target){
//             i++;
//         }else{
//             return {i,j};
//         }
//     }
//     return {-1,-1};
// }

// int main(){
//     vector<int> nums = {1,2,4,5,7,6,8,1,45};
//     int target ;
//     cout<<"Enter the target : ";
//     cin>>target;

//     vector<int> ans = pairsum(nums,target);
//     cout<<ans[0]<<" , "<<ans[1]<<endl;//because ans hold only two values
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution{
//     public: 
//         vector<int> PairSum(vector<int>&nums,int &target){
//             vector<int> index;
//             int st = 0, end = nums.size();
//             int sum = 0;

//             while(st<nums.size()){
//                 int mid = st+ (end-st)/2;
//                 if(mid>target) return index;

//                 if((nums[mid]+nums[mid+1])== target){
//                     index.push_back(mid);
//                     index.push_back(mid+1);
//                     return index;
//                 }else if((nums[mid]+nums[mid-1]) == target){
//                     index.push_back(mid-1);
//                     index.push_back(mid);
//                     return index;

//                 }else{

//                     if((nums[mid]+nums[mid+1])>target){
//                         st = mid+1;
//                     }

//                     if((nums[mid]+nums[mid-1])<target){
//                         end = mid-1;
//                     } 
//                 }
//             }
            
//         }

// };

// int main(){
//     Solution T;
//     vector<int> nums = {2,7,11,13};
//     int target = 16;
//     vector<int> index = T.PairSum(nums,target);
//     for(int val: index){
//         cout<<val<<" ";
//     }
//     return 0;
// } 

//using hashing concept 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> pairSum(vector<int>&nums,int tar){
            unordered_map<int,int> m;
            
            for(int i = 0; i<nums.size(); i++){
                int first = nums[i];
                int sec = tar - first;

                if(m.find(sec) != m.end()){
                    
                    return {m[sec],i};
                }
                m[first] = i;
            }
            

        }

};

int main(){
    Solution T;
    vector<int> nums = {3,2,4};
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    vector<int> ans = T.pairSum(nums,target);
    for(int v: ans){
        cout<<v<<",";
    }
    return 0;
}   