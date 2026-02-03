#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        int peakArray(vector<int> &m){
            

            int st = 1, end = m.size()-2;
            int peak = 0;
            
            while(st<=end){
                int mid = st + (end-st)/2;
                if(m[mid]>m[mid-1] && m[mid]>m[mid+1]){
                    return mid;
                }else if(m[mid]>m[mid-1]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
            
            return -1;
        }

};

int main(){
    Solution T;
    vector<int> mountain = {0,3,5,10,11,5,2};
    cout<<"Your Peak index = "<<T.peakArray(mountain)<<endl;
    return 0;
}