// #include <iostream>
// // #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     // char str[] = {'a','b','c'};//that is not-perfect string 
//     // char str[] = {'a','b','c','\0'};//for the character 
//     // char str[] = "college";//string literals 

//     // cout<<strlen(str)<<endl;
//     // cout<<str[0]<<endl;// direct access ke liye on the string 

//     // cout<<str<<endl;


//     // char str[100]; //these for scratch values 
//     // cout<<"Enter the sentance : ";
//     // cin.getline(str,100,'.');
//     // cout<<str<<endl;

//     //these for inbuilt value in c++ language 
//     string str;
//     cout<<"Entert he sentance : ";
//     getline(cin,str,'.');// where is '.' is delimiter to stoping cin>> the value in the string and also used for const char arr[]
//     cout<<str<<endl;
//     cout<<sizeof(str)<<endl;
//     cout<<str[3]<<endl;


//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>    
// using namespace std;

// int main(){
//     string a = "welcomeWorld";
    
//     cout<<sizeof(a)<<endl;
//     cout<<a.length()<<endl;
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// bool isPalindrom(string str){
//     reverse(str.begin(),str.end());
// }

// int main(){//first case when have a char array
//     char str[] = {'h','e','l','l','o','\0'};
//         int st = 0,end = sizeof(str)/sizeof(str[0])-1;

//         while(st<end){
//             swap(str[st++],str[end--]);
//         }

//         for(char val : str){
//             cout<<val<<" ";
//         }

//     //second case when have string 
//     // string str = "racecar";
    
//     // cout<<isPalindrom(str)<<endl;

    
    

//     return 0;
// }
