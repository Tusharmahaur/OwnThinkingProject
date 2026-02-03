#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        int peakArray(vector<int> &m){
            int tar ;
            cout<<"Enter the Target = ";
            cin>>tar;

            int st = 0, end = m.size()-1;
            
            while(st<=end){
                int mid = st+ (end-st)/2;
                    
            }
            
            return -1;
        }

};


int main(){
    Solution T;
    vector<int> mountain = {0,3,8,9,5,2};
    cout<<"Your Peak index = "<<T.peakArray(mountain)<<endl;
    return 0;
}