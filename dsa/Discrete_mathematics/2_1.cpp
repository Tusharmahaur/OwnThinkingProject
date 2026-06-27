#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string complement(){
            return "U Here is universal set.";
        }

        set<int> Union(vector<int> &A, vector<int> &B){
            set<int> s ;
            if(A > B){
                for(int i = 0; i<A.size(); i++){
                    s.insert(A[i]);
                    s.insert(B[i]);
                }
            }else{
                for(int i = 0; i<B.size(); i++){
                    s.insert(A[i]);
                    s.insert(B[i]);
                }
            }
            return s;          
        }
        vector<int> intersection(vector<int>&A,vector<int>&B){
            vector<int> vec;

            if(A > B){
                for(int i = 0; i<A.size(); i++){
                    for(int j = 0; j<A.size(); j++){
                        if(A[i][j] == B[i][j]){
                            vec.push_back(A[i][j]);
                        }
                    }
                }
            }else{
                for(int i = 0; i<B.size(); i++){
                    for(int j = 0; j<B.size(); j++){
                        if(A[i][j] == B[i][j]){
                            vec.push_back(B[i][j]);
                        }
                    }
                }
            }

            return vec;
        }


};

int main(){
    Solution T;
    vector<int> A = {1,2};
    vector<int> B = {1,2,3};

    vector<vector<int>> subset = {
        {1,1},
        {2,1},
        {2,2},
        {1,3}};
//    cout<<T.complement()<<endl; 
    set<int> s = T.Union(A,B);
    for(int val : s){
        cout<<val<<",";
    }

    vector<int> v = T.intersection(A,B);
    for(int val : v){
        cout<<val<<",";
    }
    return 0;
}