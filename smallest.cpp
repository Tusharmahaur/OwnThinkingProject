#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {45,-6,2,3,4,5,-5,0,78,45,6};
    int16_t size = 11;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int index = 0;
    int largIndex = 0;
    for(int i = 0; i<size; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            index+= i+1;
        }
        if(arr[i]>largest){
            largest = arr[i];
            largIndex += i+1;
        }
    }

    cout<<"Smallest values = "<<smallest<<", it's Index = "<<index<<endl;
    cout<<"largest valuse = "<<largest<<", it's index = "<<largIndex<<endl;
    return 0;
}