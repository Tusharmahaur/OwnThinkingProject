#include <iostream>
#include <cctype>//for isalnum() function they are inbuilt function for check the character is alpha numaric or not     
using namespace std;

class Solution{
    public:
        bool isAlpha(char ch){
            if((ch>='0' and ch<= '9')||(tolower(ch)>='a' && tolower(ch)<='z')){
                return true;
            }
        }
        bool isPalindrom(string s){
            int st = 0, end = s.length()-1;
            while(st<=end){
                if(!isalnum(s[st])){
                    st++; continue;
                }
                if(!isAlpha(s[end])){
                    end--; continue;
                }

                if(tolower(s[st]) != tolower(s[end])){
                    return false;   
                }

                st++,end--;

            }
            return true;
        }
};

int main(){
    Solution T;
    string str;

    cout<<"Enter the string : ";
    cin>>str;

    int v = T.isPalindrom(str);
    if(v == 1) cout<<"True"<<endl;
    else cout<<"False"<<endl;

    return 0;
}