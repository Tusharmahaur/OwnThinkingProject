#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int binary(vector<int>& num,int tar,int st,int end){
            int mid = st + (end-st)/2;
        if(st<=end){
            if(num[mid] == tar){
                return mid;
            }else if(num[mid] >tar){
                return binary(num,tar,st,end-1);
            }else{
                return binary(num,tar,st+1,end);
            }
        }
        return -1;
    }

};

int main(){
    Solution T;
    vector<int> nums = {1,4,5,7,8,9,11};
    int target = 7;
    cout<<"Your index is : "<<T.binary(nums,target,0,nums.size())<<endl;
    return 0;
}