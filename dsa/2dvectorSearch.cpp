#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//for the O(log(n*m)) time complexity 
class Solution{
    public:
        bool searchInRow(vector<vector<int>> &mat, int target, int row){
            int  n = mat[0].size();
            int st = 0, end = n-1;
            while(st<=end){
                int mid = st+(end-st)/2;
                if(target == mat[row][mid] ){
                    return true;
                }else if(target > mat[row][mid]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
            return false;
        }

        //main function 
        bool searchMatrix(vector<vector<int>> &matrix,int tar){
            int m = matrix.size(), n = matrix[1].size();

            int startRow = 0, endRow = m-1;
            
            while(startRow<=endRow){
                    int midRow = startRow+(endRow-startRow)/2;

                    //these assigning for the rows like rows 1,2,3
                    if(tar >= matrix[midRow][0] && tar <= matrix[midRow][n-1]){
                        return searchInRow(matrix,tar, midRow);
                    }else if(tar >= matrix[midRow][n-1]){
                        startRow = midRow+1;
                    }else{
                        endRow = midRow-1;
                    }
            }
            return false ; 
        }

};

int main(){
    Solution T;
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    vector<vector<int>> nums = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    
    // cout<<nums[1].size()<<endl;
    if(T.searchMatrix(nums,target)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }    
    return 0;
}