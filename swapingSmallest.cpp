#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec;
    vec.push_back(0);
    vec.push_back(5);
    vec.push_back(8);
    vec.push_back(8);
    vec.push_back(8);
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    
    cout<<"Size = "<<vec.size()<<endl;
    cout<<"Capacity = "<<vec.capacity()<<endl;
    return 0;
}