// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution{
//     public: 
//         int peakArray(vector<int> &m){
            

//             int st = 1, end = m.size()-2;
//             int peak = 0;
            
//             while(st<=end){
//                 int mid = st + (end-st)/2;
//                 if(m[mid]>m[mid-1] && m[mid]>m[mid+1]){
//                     return mid;
//                 }else if(m[mid]>m[mid-1]){
//                     st = mid+1;
//                 }else{
//                     end = mid-1;
//                 }
//             }
            
//             return -1;
//         }

// };

// int main(){
//     Solution T;
//     vector<int> mountain = {0,3,5,10,11,5,2};
//     cout<<"Your Peak index = "<<T.peakArray(mountain)<<endl;
//     return 0;
// }

//linear Search Approach //time complexity O(n)
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution{
//     public:
//         int peakEle(vector<int> &nums){
//             for(int i = 0; i<nums.size(); i++){
//                 if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
//                     return nums[i];
//                 }
//             }
//             return -1;
//         }

// };

// int main(){
//     Solution T;
//     vector <int> nums = {0,3,9,7,5,2};
//     cout<<T.peakEle(nums)<<endl;
//     return 0;
// }

//binary search
#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int peakEle(vector<int> &nums){
            int st = 0,end = nums.size()-1;
            int mid = st+(end-st)/2;
            
            for(int i = 1;i<end-1; i++){
                if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                    return nums[mid];
                }else if(nums[mid]>nums[mid-1]){
                    //these for left side in the mountain
                    mid = mid+1;
                }else{
                    //these for right side
                    mid = mid -1;
                }
            }
            return -1;
        }
};

int main(){
    Solution T;
    vector <int> nums = {0,3,4,7,9,5,10};
    cout<<"Your peak element is : "<<T.peakEle(nums)<<endl;
    return 0;
}