//Create a program to calculate the meadian of two array and also that is time complexity is n+m where n = first vector size and m = second vector size and time complexity is O(log(m+n)); and not use extra space also called linear space complexity O(1);
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        double median(vector<int> &a, vector<int>&b){
            //also time complexity is logn so use binary search approach in this question 
            int na = a.size(), nb = b.size();
            int st = 0; 
            int end1 = na-1, end2 = nb-1;

            int mid1 = st+(end1-st)/2; //for separate mid value as such using in binary search 
            int mid2 = st+(end2-st)/2;


            //for identify bigger size of vector 
            if(na>=nb){
                while(st<=end1){
                    if()
                }    

            }else{
            


            }
        }
};


int main(){
    Solution T;
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,4};
    cout<<"your median = "<<T.median(nums1,nums2)<<endl;
    
    return 0;
}