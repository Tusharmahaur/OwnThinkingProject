// //Here is timecomplexty is O(logn)
// #include <iostream>
// using namespace std;

// class Solution{
//     public: 
//         double myPow(){
//             double x;
//             int n;
//             cout<<"Enter the number and power respectivily : ";
//             cin>>x>>n;

//             //corner case 
//             if(n==0) return 1.0;
//             if(x == 0) return 0.0;
//             if(x == 1) return 1.0;
//             if(x == -1 and n%2 == 0) return 1.0;
//             if(x == -1 and n%2 != 0) return -1.0;

            
//             long binForm = n;
//             double ans = 1;
//             if(n<0){
//                 x = 1/x;
//                 binForm = -binForm;
//             }

//             while(binForm >0){
//                 if(binForm %2 == 1){
//                     ans *= x;
//                 }
//                 x *= x;
//                 binForm /=2;
//             }
//             return ans;
//         }
// };


// int main(){
//     Solution T;
//     cout<<T.myPow()<<endl;
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    short int ans = pow(4,2);
    unsigned short int an = 0;
    cout<<ans<<endl;
    cout<<an<<endl;
    cout<<sizeof(ans)<<endl;
    cout<<sizeof(an)<<endl;
    return 0;
}