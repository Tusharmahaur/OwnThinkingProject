//entire logic is depend first to reverse whole string 
//second reverse individual word
//return to substr(1) for neglacting to _first space in the string 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string reverseWord(string s){
            int n = s.length();
            string ans = "";

            reverse(s.begin(), s.end()); // for the reverse entire string 
            for(int i = 0; i<n; i++){
                string word = "";
                while(i<n && s[i] != ' '){
                    word += s[i];
                    i++;
                }

                reverse(word.begin(),word.end());
                if(word.length()>0){
                    ans += " "+ word;
                }
            }
            return ans.substr(1); 
        }

};

int main(){
    Solution T;
    string str;
    cout<<"Enter the anything in the world : ";
    getline(cin,str);

    cout<<T.reverseWord(str)<<endl;
    
    return 0;
}