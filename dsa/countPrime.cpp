#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int countPrime(int n){
            vector<bool> isPrime(n+1, true);
            int count = 0;

            for(int i = 2; i<n; i++){
                if(isPrime[i]){
                    count++;

                    for(int j = i*2; j<n; j = i+j){
                        isPrime[j] = false;
                    }
                }
            }
            return count;
        }
};

int main(){
    Solution T;
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<T.countPrime(num)<<endl;
    
    return 0;
}