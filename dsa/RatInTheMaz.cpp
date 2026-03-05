#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void helper(vector<vector<int>> &mat, int r, int c,string path, vector<string> &ans){
            int n = mat.size();
            if(r<0 || c<0||r>=n || c>=n || mat[r][c] == 0 ||mat[r][c] == -1){
                return ;
            }

            if(r == n-1 && c == n-1){
                ans.push_back(path);
                return; 
            }

            mat[r][c]  = -1;//visited 
            //down call
            helper(mat,r+1,c,path+"D",ans);
            //up call
            helper(mat,r-1,c,path+"U",ans);
            //right call
            helper(mat,r,c+1,path+"R",ans);
            //left call
            helper(mat,r,c-1,path+"L",ans);
            
            mat[r][c]= 1;

        }

        vector<string> findPath(vector<vector<int>> &mat){
            int n = mat.size();

            vector<string> ans; 
            string path = "";
            
            vector<vector<bool>> vis(n,vector<bool>(n,false));
            helper(mat, 0, 0,path, ans);

            return ans;
        }

};

int main(){
    Solution T;
    vector<vector<int>> nums = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    
    vector<string> ans = T.findPath(nums);
    for(string path : ans){
        cout<<path<<endl;
    }
    return 0;
}   