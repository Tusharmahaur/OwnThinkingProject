#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int countPrime(int n){
            vector<bool> isPrime(n+1,true);
            int count = 0;

            for(int i = 2; i<n; i++){
                if(isPrime[i]){
                    count++;

                    for(int j = i*2; j<n ; j = j+i){
                        isPrime[j] = false;
                    }
                }

            }
            return count;
        }
};

int main(){
    Solution T;
    int n;
    cout<<"Enter the number which want to prime number count = ";
    cin>>n;
    cout<<"Your prime number count is  : "<<T.countPrime(n)<<endl;


    return 0;
}