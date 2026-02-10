#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string removeOccurrence(string s,string part){
            while(s.length()>0 && s.find(part)<s.length()){
                s.erase(s.find(part),part.length());

            }
            return s;
        }
};

int main(){
    Solution T;
    string str = "daabcbaabcbc";
    string part = "abc";
    cout<<str.find(part)<<endl;//this function automatically find all possible occurrence in str string they automatically run state forward loop in str string and seperate declare your part and also they function give the integer value to part how many time to come your string.
    cout<<T.removeOccurrence(str,part)<<endl;
    
    return 0;
}