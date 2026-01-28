#include <iostream>
using namespace std;

namespace hello{
    int n = 243;

    void fnx(void){
        cout<<"Hello world"<<endl;
    }
}
int main(){
    hello::fnx();
    cout<<hello::n<<endl;
    return 0;
}