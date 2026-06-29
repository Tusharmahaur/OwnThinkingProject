// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int maximum(vector<int>&n){
//             int temp = INT_MIN; 

//             for(int i= 0; i<n.size(); i++){
//                 temp = max(temp,n[i]);
//             }
//             return temp;
//         }

// };

// int main(){
//     Solution T;
//     vector<int> nums = {1,8,12,9,11,2,14,5,10,4};
//     cout<<T.maximum(nums)<<endl;

//     // int temp = INT_MIN; 

//     // for(int i= 0; i<nums.size(); i++){
       
//     //     temp = max(temp,nums[i]);
//     // }
//     // cout<<temp<<endl;
//     return 0;
// }


// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int Sum(vector<int>&a){
//             int sum = 0; 
//             int i = 0;
//             while(i<a.size()){
//                 sum += a[i];
//                 i++;
//             }
//             return sum;
//         }

// };

// int main(){
//     Solution T;
//     vector<int> nums = {1,2,4,5,3,65,86,3};
//     cout<<T.Sum(nums)<<endl;
//     return 0;
// }   


// //This method to find the maximum diffirence to given array
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int diffirence(vector<int> &num){
//             int min = 0;
//             int temp = 0;  
//             for(int i = 0; i<num.size(); i++){
//                 for(int j = i+1; j<num.size(); j++){
//                     min = num[i];
//                     min = num[j]- min;
//                     if(min<0){
//                         min *= min*(-1);
//                     }
//                     temp = max(temp,min);
//                 }
//             }
//             return temp;
//         }

// };

// int main(){
//     Solution T;
//     vector<int> nums = {0,1,4,5,2,6,12,7,8,9};
//     cout<<T.diffirence(nums)<<endl;
    
//     return 0;
// }   


//Palindrom algorithm 
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         bool isPalindrom(string str){
//             int st = 0, end = str.length();

//             while(st>=end){
//                 if(str[st] == str[end]){
//                     st++;
//                     end--;
//                 }else{
//                     return false;
//                 }
//             }
//             return true;
//         }

// };

// int main(){
//     Solution T;
//     string str;
//     cout<<"Enter the string : ";
//     getline(cin,str);
    
//     if(T.isPalindrom(str)){
//         cout<<"\nYour string is palindrom";
//     }else{
//         cout<<"\nYour string has not a palindrom";
//     }
    
//     return 0;
// }



//power calculate method 
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         double power(int num, int power){
//             double ans = 1;
//             for(int i = 0; i<power; i++){
//                 ans = ans*num;
//             }

//             return ans;
//         }

// };

// int main(){
//     Solution T;
//     int num,power;
//     cout<<"Enter the number and power : ";
//     cin>>num>>power;

//     cout<<T.power(num,power)<<endl;

    
//     return 0;
// }   



//inserting method in increasement order
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int> update(vector<int> &l, int n){
//             l.push_back(n);
//             int temp = 0;
//             for(int i = 0; i<l.size()-1; i++){
//                 if(l[i]<l[i+1]){
//                     continue;
//                 }
//             }
//             return l;

//         }

// };

// int main(){
//     Solution T;
//     int inserting_num ;
//     cout<<"Enter the number : ";
//     cin>>inserting_num;

//     vector<int> nums = {1,2,4,5,7,8,9};

//     vector<int> ans  = T.update(nums,inserting_num);

//     for(int v: ans){
//         cout<<v<<" ";
//     }
    
//     return 0;
// }



// //find smallest number is the time complexity O(n^2)
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int findSmallestNumber(vector<int> n){
//             int small = INT_MAX;
//             for(int i = 0; i<n.size(); i++){
//                 for(int j= i+1; j<n.size(); j++){
//                     small = min(small,n[j]);
//                 }
//             }

//             return small;
//         }

// };

// int main(){
//     Solution T;
//     vector<int> nums = {1,2,4,5,3,4,5,8,-1};
//     cout<<T.findSmallestNumber(nums)<<endl;
    
//     return 0;
// }



//Q.17 first occurence in the largest number 
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int firstOccurenceLargest(vector<int> &n){
//             for(int i = 0; i<n.size(); i++){
//                 if(n[i]<n[i+1]){
//                     return n[i+1];
//                 }
//             }
//             return -1;
//         }

// };

// int main(){
//     Solution T;
//     vector<int > nums = {1,-2,52,8,7,6,2};
//     cout<<T.firstOccurenceLargest(nums)<<endl;
//     return 0;
// }




//Q.18 last occurence smallest number 
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int firstOccurenceSmallest(vector<int> &n){
//             for(int i = n.size(); i=0; i--){
//                 if(n[i-1]>n[i]){
//                     return n[i];
//                 }
//             }
           
//         }

// };

// int main(){
//     Solution T;
//     vector<int > nums = {1,-2,52,8,7,6,2};
//     cout<<T.firstOccurenceSmallest(nums)<<endl;
//     return 0;
// }




//Q.20 find the both number largest and smallest in the given algorithm
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         pair<int,int> find(vector<int> &set){
//             int maximum = INT_MIN;
//             int minimum = INT_MAX;
//             for(int i = 0; i<set.size(); i++){
//                 maximum = max(maximum,set[i]);
//                 minimum = min(minimum,set[i]);
//             }
//             return {maximum,minimum};
//         }
// };

// int main(){
//     Solution T;
//     vector<int> nums = {1,2,4,5,306,4,9,5,5,7,0,-2,45};
//     pair<int,int> ans = T.find(nums);

//     cout<<"Maximum value : "<<ans.first<<"\nMinimum Value : "<<ans.second<<endl;
//     return 0;
// }   





// //Q.21 Describe an algorithm that puts the first three terms of a sequence of integers of arbitrary length in increasing order. 
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int sumOfSuccessive(vector<int>&n){
//             int sum = 0,maximum = 0;

//             for(int i=0; i<n.size()-2; i++){
//                 for(int j = i+1; j<n.size()-2; j++){
//                     sum = n[j]+n[j+1]+n[j+2];
//                     maximum = max(maximum,sum);
//                 }
//             }
//             return maximum;
//         }
// };

// int main(){
//     Solution T;
//     vector<int> nums = {1,4,5,7,9,24,4,65,1,41,12,15,19};
//     cout<<"Sum of three successive = "<<T.sumOfSuccessive(nums)<<endl;
//     return 0;
// }   





//Q.7 largest even integers finding algorithm
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int findLargest(vector<int> &n){
//             int largest = INT_MIN,evenLargest = INT_MIN;

//             for(int i =0; i<n.size(); i++){
//                 largest = max(largest,n[i]);

//                 if(n[i]%2 == 0){
//                     evenLargest = max(evenLargest,n[i]);
//                 }
//             }
//             if(largest > evenLargest){
//                 return 0;
//             }else{
//                 return evenLargest;
//             }
//         }

// };

// int main(){
//     Solution T;
//     vector<int> nums = {1,4,5,2,7,8,9,6,3,5,8,16,12,15,28,24};
//     cout<<"Your even largest number : "<<T.findLargest(nums)<<endl;
//     return 0;
// }





//Q.8 last even integers given by the algorithm 
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int lastEvenNumber(vector<int> &a){
           
//             for(int i = a.size()-1; i>=0; i--){
//                 if(a[i]%2 == 0){
//                     return (a[i]);
//                 }
//             }
//             return 0;
//         }

// };

// int main(){
//     Solution T;
//     vector<int> nums = {1,2,4,5,8,8,87,9,6,3,42,87,1};

//     cout<<"last even integer in this vector is : "<<T.lastEvenNumber(nums)<<endl;
//     return 0;
// }