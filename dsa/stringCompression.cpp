#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int compresion(vector<char> &s){
            int n = s.size();
            int idx = 0;

            for(int i = 0; i<n;i++){
                char ch = s[i];
                int count = 0;

                while(i<n and s[i] == ch){
                    count++; i++;
                }

                if(count == 1){
                    s[idx++] = ch;
                }else{
                    s[idx++] = ch;
                    string str = to_string(count);

                    for(char dig: str){
                        s[idx++] = dig;
                    }
                }

                i--;
            }

            s.resize(idx);
            return idx;
        }
};

int main(){
    Solution T;
    vector<char> str = {'a','a','b','b','b','c','c','c','c'};
    
    cout<<T.compresion(str)<<endl;
    return 0;
}