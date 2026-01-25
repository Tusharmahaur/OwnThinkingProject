#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void linearSearch(int arr[]){
    int size = 11;
    int start = 0,end = size-1;
    if(size%2 == 0){
        while(start<end){
            swap(arr[start],arr[end]);
            start++,end--;
        }
    }else{
        while(start <= end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }

    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[] = {2,3,4,-90,34,1,32,43,53,2,43};
    
    linearSearch(arr);


    return 0;
}