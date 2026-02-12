// // /* The code you provided is a C++ program that calculates profit, loss, profit percentage, loss
// percentage, and discount percentage based on the cost price, selling price, and market price of
// an item. Here is a summary of what the code does: */
//profit,loss calculating 
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution{
//     protected: 
//         float cp,sp,mp,D,profit,loss,profitPer,lossPer;

//     public:
//         Solution(){
//             cout<<"Enter the Cost price of item and selling price of item respactivly : ";
//             cin>>cp>>sp;
//         }

//         void profitPercent(void){
//             if(sp>cp){
//                 profitPer = ((sp-cp)/cp)*100;
//                 cout<<"Your profit = "<<sp-cp<<endl;
//                 cout<<"Your profit percentage = "<<profitPer<<"%"<<endl;
//             }else{
//                 lossPer = ((cp-sp)/cp)*100;
//                 cout<<"Your loss = "<<cp-sp<<endl;
//                 cout<<"Your loss percentage = "<<lossPer<<"%"<<endl;
//             }
//         }

//         void setMp(void){
//             cout<<"\nMarket price : ";
//             cin>>mp;
//         }

//         void Discount(void){
//             D = (mp - sp)/mp*100;
//             cout<<"Your Discount Percentage = -"<<D<<"%"<<endl;     
//         }


//         void display(void){
//             cout<<"Your cost price = "<<cp<<endl;
//             cout<<"Your selling price = "<<sp<<endl;
//         }

// };


// int main(){ 
//     Solution T;
//     T.profitPercent();
//     T.setMp();
//     T.Discount();
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution{
//     public:
//         vector<int> sum(vector<int>&nums,int tar){
//             int st = 0, end = nums.size()-1;
            
//             for(st ; st<=mid)
//         }
// };

// int main(){ 
//     Solution T;
//     vector<int> nums = {2,7,11,13};
//     int target = 9;
//     T.sum(nums,target);
//     for(int val: nums){
//         cout<<val<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     int n = 3564;
//     cout<<"Your number of digits is : "<<(int)(log10(n)+1)<<endl;
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        //number one method for the hcf 
        int hcf(int a, int b){
            int gcd = 1;
            if(a==0) return b;
            if(b==0) return a;
            if(a == b) return a;
            for(int i = 1; i<= min(a,b); i++){
                if(a%i == 0 && b%i==0){
                    gcd = i;
                }
            }
            return gcd;
        }

        //number two method for the hcf
        int gcd(int a, int b){
            while( a>0 and b>0){
                if(a>b){
                    a = a%b;
                }else{
                    b = b%a;
                }
            }

            if(a == 0 ) return b;
            return a;   
        }

        //for LCM
        int lcm(int a, int b){
           ;
            return (a*b/gcd(a,b));
        }
};

int main(){
    Solution T;
    int a,b;
    cout<<"Enter the number a and b respactivily : ";
    cin>>a>>b;
    cout<<T.lcm(a,b)<<endl;
    return 0;
}