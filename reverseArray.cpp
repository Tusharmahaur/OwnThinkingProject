// #include <iostream>
// #include <cmath>
// using namespace std;

// void linearSearch(int arr[]){
//     int size = 11;
//     int start = 0,end = size-1;
//     if(size%2 == 0){
//         while(start<end){
//             swap(arr[start],arr[end]);
//             start++,end--;
//         }
//     }else{
//         while(start <= end){
//             swap(arr[start],arr[end]);
//             start++;
//             end--;
//         }
//     }

//     for(int i = 0; i<size;i++){
//         cout<<arr[i]<<" ";
//     }

// }

// int main(){
//     int arr[] = {2,3,4,-90,34,1,32,43,53,2,43};
    
//     linearSearch(arr);


//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution{
//     public: 
//         //member function 
//         vector reverse(vector<int> &nums){
//             int temp = 0;
//             for(int i = 0;i<nums.size();i++){
//                 nums[i] = nums.size()-1;
//                 // if(nums.size()/2 == 0){//this case when the during run time of the simulated code 
//                 //     return nums;
//                 // }else{
//                     return nums;
//                 // }
//             }
//         }
// };

// int main(){
//     vector <int> nums = {12,4,54,2,47,36,6,22,32};
    
//     cout<<nums.size()<<endl;
//     //befor reversing 
//     for(int val:nums){
//         cout<<val<<" ";
//     }


//     return 0;
// }