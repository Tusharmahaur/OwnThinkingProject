// #include <iostream>
// using namespace std;

// namespace hello{
//     int n = 243;

//     void fnx(void){
//         cout<<"Hello world"<<endl;
//     }
// }
// int main(){
//     hello::fnx();
//     cout<<hello::n<<endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int main(){
    int64_t n;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"Your nth number sum = "<<n*(n+1)/2<<endl;
}