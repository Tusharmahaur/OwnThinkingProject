#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int indivisualElement(vector<vector<int>> &matrixElement,int target,int row){
            int n = matrixElement[0].size();
            int st = 0, end = n-1;

            while(st<=end){
                int mid = st+(end-st)/2;

                if(target == mid){
                    return mid;
                }else if(target > mid){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
        }
        
        pair<int,int> print(vector<vector<int>> &matrix,int target){
            int m = matrix.size(),n = matrix[0].size();
            int stRow = 0, endRow = m-1;

            while(stRow<=endRow){
                int midRow = stRow + (endRow-stRow)/2;

                if(matrix[midRow][0] <= target and matrix[midRow][n-1] >= target){
                    int temp = indivisualElement(matrix,target,midRow);
                return {midRow,temp};
                }else if(target >= matrix[midRow][n-1] ){
                    stRow = midRow+1 ;
                }else{
                    endRow = midRow-1;
                }
            }
            return {-1,-1};
        }
};

int main(){
    Solution T;
    int target;

    cout<<"Entert the target : ";
    cin>>target;
    vector<vector<int>> nums = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    pair<int,int> temp = T.print(nums,target);
    cout<<"Row = "<<temp.first<<" , column = "<<temp.second<<endl;
    cout<<"Since starting point is (0 to n) number"<<endl;
    return 0;
}