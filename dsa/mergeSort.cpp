#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        void marge(vector<int> &A,vector<int> &B){
            int m = A.size(), n = B.size();
            int idx = m+n-1,i = m-1,j = n-1;
            
            while(i>= 0 and j>=0){
                if(A[i]>= B[j]){
                    A[idx--] = A[i--];
                    //idx-- jo ki next line me likhte the bo ek single line me described kar diya
                }else{
                    A[idx--] = B[j--];
                }
            }

            while(j>=0){
                A[idx--] = B[j--];
            }
        }
};


int main(){ 
    Solution T;
        vector<int> a ;
        a.push_back(1);
        a.push_back(2);
        a.push_back(5);
        vector<int> b = {3,6,7,8};
    T.marge(a,b);
    

    return 0;
}