#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        // int diagonalSum(int arr[3][3]){//O(n*n) time complexity
            
        //     int sum = 0;
        //     for(int i = 0; i<3 ; i++){
        //         for(int j =0 ; j<3 ; j++){
        //             if(i == j){
        //                 sum += arr[i][j];//for primary diagonal 
        //             }else if(j == 3-i-1){
        //                 sum += arr[i][j];//for secondary diagonal
        //             }
        //         }                
        //     }
        //     return sum;
        // }  
        
        int diagonalSum(int arr[3][3]){//O(n) time complexity
            
            int sum = 0;
            for(int i = 0; i<3 ; i++){
                sum += arr[i][i];   
                if(i != 3-i-1){
                    sum += arr[i][3-i-1];
                }         
            }
            return sum;
        }    
};

int main(){
    Solution T;
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout<<T.diagonalSum(arr)<<endl;
    
    return 0;
}