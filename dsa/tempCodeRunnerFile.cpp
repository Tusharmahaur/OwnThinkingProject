// #include <bits/stdc++.h>
// using namespace std;

// bool check(int x,int y,int z){
//     int a = max(x,max(y,z));
//     int b,c;

//     if(a == x){
//         b = y;
//         c = z;
//     }else if(a == y){
//         b = x;
//         c = z;
//     }else{
//         b = x;
//         c = y;
//     }

//     if(a*a == b*b+c*c){
//         return true;
//     }else{
//         return false;
//     }
// }
// int32_t main(){
//     int x,y,z;
//     cin>>x>>y>>z;
//     if(check(x,y,z))
//         cout<<"valid pythogorian triplet"<<endl;
//     else  cout<<"Invalid pythogorian triplet"<<endl;
//     }

//binary conversion

// #include <bits/stdc++.h>
// using namespace std;

// long long binary(int n){
//     long long binary_num  = 0;
//     int place_value = 1;
//     string str = "";
//     if(n == 0) return 0;
//     if(n == 1) return 1;


//     while(n > 0){
//         int remainder = n%2;
//         binary_num = binary_num + remainder*place_value;
//         n = n/2;
//         place_value = place_value*10;
//         // str.push_back(binary_num);
        
//         // binary_num = 0;
//     }
//     return binary_num;
// }
// int32_t main(){
//     int num;
//     cin>>num;
//     cout<<binary(num)<<endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int haxadecimalToDecimal(string n){
//     int ans = 0;
//     int x = 1;
//     int s = n.length();
//     for(int i = s-1; i>=0; i--){
//         if(n[i] >='0' && n[i]<= '9'){
//             ans += x*(n[i]-'0');
//         }else if((n[i] >= 'A') && (n[i] <= 'F')){
//             ans += x*(n[i]-'A'+10);
//         }else if(n[i] >= 'a' && n[i] <= 'f'){
//             ans += x*(n[i]-'a'+10);
//         }
//         x *= 16;
//     }
//     return ans;
// }

// int32_t main(){
//     string n;
//     cin>>n;

//     cout<<haxadecimalToDecimal(n)<<endl;
// }

// // #include <iostream>
// // using namespace std;

// // int main(){
// //     string i = "123"; //  uint32_t = unsigned int32_t (it means 0 <= n <= 2^31-1)
// //     cout<<i<<endl;
// //     cout<<i+'2'<<endl;
// //     cout<<to_string(45)+i<<endl; //to_string(int) converted to string 
    
// //     return 0;
// // }

// //using bitwise function 
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         uint32_t revBits(uint32_t nums){
//             uint32_t res = 0;
//         for (int i = 0; i < 32; i++) {
//             res = res<<1;
//             res = res|(nums & 1);
//             nums = nums>>1;
//         }
//         return res;
//         }

// };

// int main(){
//     Solution T;
//     uint32_t nums;
//     cout<<"Enter the number : ";
//     cin>>nums;
//     cout<<T.revBits(nums)<<endl;
    
//     return 0;
// }   