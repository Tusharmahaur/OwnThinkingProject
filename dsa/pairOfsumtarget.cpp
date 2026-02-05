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

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> nums,int target){
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n-1;

    while(i<j){
        int pairsum = nums[i] +nums[j];
        if(pairsum>target){
            j--;
        }else if(pairsum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {2,1,4,7,5,2,6};
    int target ;
    cout<<"Enter the target : ";
    cin>>target;

    vector<int> ans = pairsum(nums,target);
    cout<<ans[0]<<" , "<<ans[1]<<endl;//because ans hold only two values
}

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