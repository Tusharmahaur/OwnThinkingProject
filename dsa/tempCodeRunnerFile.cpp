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

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> sort(vector<int> &nums){
//             int select = INT_MIN;
//             for(int i; i<nums.size(); i++){
//                 if(select > nums[i]){
                    
//                 }else if(select)
//             }
//             return nums;
//         }
// };

// int main(){
//     Solution T;
//     vector<int> nums = {1,2,4,8,5,3,9};
    
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> shuffle(vector<int>& nums, int n) {
//         vector<int> x;
//         vector<int> ans;
        
//         for(int i = 0; i<nums.size(); i++){
//             if(n>=i){
//                 x.push_back(nums[i]);
//             }else{
//                 ans.push_back(nums[i]);
//             }
//         }

//         for(int i = 0; i<nums.size() ; i++){
//             if(i%2 == 0){
//                 nums[i] = ans[i];
//             }else{
//                 nums[i] = x[i];
//             }
            
//         }
//         return nums;
        
//     }

// };

// int main(){
//     Solution T;
//     vector<int> nums = {1,2,4,5,7,9};
//     vector<int> ans = T.shuffle(nums,3);
//     for(int v: ans){
//         cout<<v<<" ";
//     }
//     return 0;
// }
// #include <iostream>
// #include <string> // Required for std::string
// using namespace std;


// int main() {
//     string myString = "hello";
//     int n  = 123;

//     // Using length()
//     cout << "Length using length(): " << myString.length()-1 << endl;
//     cout << "Length using length(): " << myString.substr(3) << endl;
//     cout << "Length using length(): " << to_string(n) << endl;
//     cout<<sizeof(to_string(n))<<endl;

//     // Using size()
//     cout << "Length using size(): " << myString.size() << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int divide(int dividend, int divisor) {
//     int count = 0; 
//     if(dividend<divisor) return 0;
//     if(divisor == 0 || dividend == 0) return 0;
    
//     while(dividend != 0 || dividend != 1){
//         dividend  = dividend-divisor;
//         count++;
//     }
//     return count;
// }

// int main(){
//     divide(10,3);
//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <set>
// using namespace std;

// int removeDuplicates(vector<int>& nums) {
//     set<int> s;
//     for(int i = 0; i<nums.size(); i++){
//         s.insert(nums[i]);

//     }
//     cout<<s[0]<<endl;
//     for(int ele: s){
//         cout<<ele<<" ";
//     }
//     return s.size();
// }

// int main(){
//     vector<int> nums = {0,0,1,1,1,2,2,2,2,3,3,4,4,5};
//     cout<<endl<<removeDuplicates(nums);

//     return 0;
// };

// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> mySet = {10, 20, 30};
//     // cout << mySet[1]; // ERROR: Random access not allowed
    
//     // Valid access:
//     auto it = mySet.find(20);
//     if (it != mySet.end()){ 
//         cout << *it; 
//     }// Output: 20
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    vector<int> nums = {5,7,7,7,8,8};
    int target = 7;

    int startPoint = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    int startPoint = upper_bound(nums.begin(),nums.end(),target)+nums.begin();
    cout<<startPoint<<endl;
    return 0; 
}
