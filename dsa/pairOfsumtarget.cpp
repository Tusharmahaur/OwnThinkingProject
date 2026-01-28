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
    vector <int> ans;
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
    vector<int> nums = {2,7,11,15};
    int target = 26;

    vector<int> ans = pairsum(nums,target);
    cout<<ans[0]<<" , "<<ans[1]<<endl;
}