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

#include <iostream>
#include <bits/stdc++.h>    
using namespace std;

int main(){
    string a = "welcomeWorld";
    int row;
    cout<<"Enter the number of row : ";
    cin>>row;
    cout<<sizeof(a)<<endl;
    for(int i = 0; i<=6; i++){
        for(int j = i; j <row; j++){
            cout<<endl;
        }
        cout<<a[i]<<" ";
    }
    return 0;
}