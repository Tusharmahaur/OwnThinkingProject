#include <iostream>
using namespace std;

double f(int n){
    if(n== 0) return 0;
    else return n-1+f(n/3+1);
}

int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<f(x)<<endl;

    return 0;
}