// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> linearSearch(int key,int arr[][]){
//             vector<int> ans; 
            
//             for(int i = 0; i<3; i++){
//                 for(int j = 0; j<3; j++){
//                     if(arr[i][j] == key){
//                         ans.push_back(i);
//                         ans.push_back(j);
//                         return ans;
//                     }
//                 }
//             }
//             return ans;
//         }

// };

// int main(){
//     Solution T;
//     int target = 8;
//     int nums[3][3]  = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };

//     cout<<T.linearSearch(target,nums)<<endl;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;


// vector<int> answer(int key,int arr[3][3]){
//     vector<int> ans;
//     vector<int> minuse;
//         for(int i = 0; i<3; i++){
//             for(int j = 0; j<3; j++){
//                 if(arr[i][j] == key){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     return ans;
//                 }
//             }
//         }
//         return minuse;

// }

pair<int,int> answer(int key,int arr[3][3]){
        pair<int,int> ans;
        pair<int,int> minuse = {-1,-1};
    
        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                if(arr[i][j] == key){
                    ans.first = i;
                    ans.second = j;
                    return {i,j};  // vector,pair,map ko return karne ke liye sirf curly bracket use karte hai 
                    //simple logic hai jese ham kisi bhi container ko curly brackets me declare karte hai vese hi kisi bhi container ko return karne ke curly bracket ki need rahti hai ;                  
                }
            }
        }
        return {-1,-1};
    }
    
    
int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int key = 4;
    pair<int,int> val = answer(key,arr);
    
        cout<<val.first<<" "<<val.second;
   
        return 0;
}