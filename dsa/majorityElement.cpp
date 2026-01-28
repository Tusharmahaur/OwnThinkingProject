// //time complexity O(n^2)
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution{
//     public:
//         //member function 
//         int majorityElement(vector<int> &nums){

//             int n = nums.size();
//             for(int val : nums){

//                 int freq = 0;
                
//                 for(int el : nums){
//                     if(el == val){
//                         freq++;
//                     }
//                 }
//                 if(freq>n/2){
//                     return val;
//                 }
//             }
//             return -1;
//         }
// };

// int main(){
//         Solution T;
//         vector<int> nums = {1,1,2,2,2,4,2,2,4};
//         cout<<"your majority element = "<<T.majorityElement(nums)<<endl;
//     return 0;
// }



//timecomplexity nlogn
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution{
//     public:
//         //member function 

//         int majorityElement(vector<int> &nums){
//             int n = nums.size();
            
//             //first step shorting 
//             sort(nums.begin(),nums.end());//this time complexity is nlogn
//             //frequency count
//             int freq = 1,ans = nums[0];//second step frequency declaration
//             for(int i= 1; i<n; i++){
//                 if(nums[i] == nums[i-1]){
//                     freq++;
//                 }else{

//                     freq = 1;
//                     ans = nums[i];
//                 }
//                 if(freq>n/2){
//                     return ans;
//                 }
//             }
//             return ans;
//         }
// };

// int main(){
//         Solution T;
//         vector<int> nums = {1,1,2,2,2,4,2,2,4};
//         cout<<"your majority element = "<<T.majorityElement(nums)<<endl;

//     return 0;
// }


//moor's voting algorithm
#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        //member function 
        //Simple approach travel all vector and if next nums are same as befor than frequency++ other wise reset the frequency;

        int majorityElement(vector<int> &nums){
            int freq = 0,ans = 0;

            for(int i=0; i<nums.size(); i++){
                if(freq == 0){
                    ans = nums[i];
                }
                if(ans == nums[i]){
                    freq++;
                }else{
                    freq--;
                }
            }
            return ans;
        }
};

int main(){
        Solution T;
        vector<int> nums = {1,1,2,2,2,4,2,2,4};
        cout<<"your majority element = "<<T.majorityElement(nums)<<endl;
    return 0;
}




