// #include <iostream>
// using namespace std;

// class Solution{
//     public:
//         int linearSearch(int arr[]){
//         int target,size = 11;
//         cout<<"Enter the target : ";
//         cin>>target;
    
//         for(int i = 0; i<size; i++){
//             if(arr[i] == target){
//                 return i+1;
//             }
//         }
//         return -1;
//     }
// };
// int main(){
//     Solution T;
//     int arr[] = {2,3,4,-90,34,1,32,43,53,2,51};
    
//     cout<<"your target index is : "<<T.linearSearch(arr)<<endl;

//     return 0;
// }


//using throw the vector 
#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        //member function 
        int target(vector<int> &nums,int target){
            int iterator = 1;
            for(int val:nums){
                if(val == target){
                    return iterator;
                }
                iterator++;
            }
            return -1;
        }
};

int main(){
    vector <int> nums = {1,5,4,6,7,5,2,6,7};
    Solution T;

    cout<<"Your target = "<<T.target(nums,2)<<endl;

    return 0;
}