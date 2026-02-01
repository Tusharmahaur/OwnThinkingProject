#include <iostream>
using namespace std;

class Solution{
    public: 
        double myPow(){
            long x;
            int n;
            cout<<"Enter the number and power respectivily : ";
            cin>>x>>n;

            long binForm = n;
            double ans = 1;


            while(binForm>0){
                    if(binForm%2 == 1){
                ans = ans*x;
            }
            x *= x;
            binForm/=2;
            }
            return ans;
        }
};


int main(){
    Solution T;
    cout<<T.myPow()<<endl;
    return 0;
}