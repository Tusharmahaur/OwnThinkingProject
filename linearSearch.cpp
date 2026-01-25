#include <iostream>
using namespace std;

int linearSearch(int arr[]){
    int target,size = 11;
    cout<<"Enter the target : ";
    cin>>target;

    for(int i = 0; i<size; i++){
        if(arr[i] == target){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {2,3,4,-90,34,1,32,43,53,2,51};
    
    cout<<"your target index is : "<<linearSearch(arr)<<endl;

    return 0;
}