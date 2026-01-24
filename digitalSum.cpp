// #include <iostream>
// using namespace std;

// //Function declaration for converting to number in digital Sum
// long long digitalSum(long long int num)
// {   
//     long long int digiSum = 0;
//     //loop for sum all digits 
//     while (num > 0) {
//         digiSum += num % 10;
//         num = num / 10;
//     }

//     //for further sum when to output is single digits
//     if(digiSum>0 && digiSum<=9){
//         return digiSum;
//     }else{
//         //to converting further into single in number 
//         long long int temp = 0;
//         while (digiSum >0 ){
//             temp = temp + digiSum%10;
//             digiSum =digiSum/10;
//         }
        
//         //further recheck in this number 
//         if(temp>0 and temp<=9){
//             return temp;
//         }else{
//             long long int temp1 = 0;
//             while (temp >0 ){
//                 temp1 = temp1 + temp%10;
//                 temp =temp/10;
//             }
//         }
//     }
// }

// int main()
// {
//     long long int num = 0;
//     cout<<"Enter the number is : ";
//     cin>>num;
//     //To check the condition if fuction return 0 than print the value is 0 or 9
//     if(digitalSum(num)== 0){
//         cout<<"Your Digital Sum is : 0 or 9 "<<endl;
//     }else{
//         //other wise print the digital sum
//     cout << "Your Digital Sum is : " <<digitalSum(num)<<endl;
// }
//     return 0;
// }


// //second logic to says jese hi two digit ho unko jod ke single digit kar do 
// #include <iostream>
// #include <vector>
// using namespace std;

// //Function declaration for converting to number in digital Sum


// int main()
// {
//     long long int num = 0;
//     cout<<"Enter the number is : ";
//     cin>>num;
    
//     int digiSum = 0;
//     int i = 0;
//     while (num > 0) {
//         digiSum += num % 10;
//         num = num / 10;
//         i++;
//     }
//     cout<<"Your number is "<<i<<" digits."<<endl;

//     //Dynamic array for 
//     // int arr[] = new int[i];
//     for(int j=0; j<i; j++){
//         arr[j] = num%10;
//         num = num/10;
//     }

    

//     return 0;
// }



#include <iostream>
using namespace std;

int counter(int num){
    //For counting number of digits
    int count = 0;
    int digitSum = 0;
    while(num>0){
        digitSum += num%10;
        num /= 10;
        count++;
    }
    return count;

}


int main(){
    long long int num= 0;
    cout<<"Enter the number : ";
    cin>>num;
    int  count = counter(num);
    
    // cout<<"loop run in the "<<counter(num)<<" times"<<endl;
    // cout<<num<<endl;

    
    //for containing each digit in the arr container 
    int arr[count];
    for(int i = 0 ; i<count; i++){
        arr[i] = num%10;
        num = num/10;
    }

    // for(int i = 0; i<count; i++){
    //     cout<<arr[i]<<" ";
    // }

    //this loop are finally count to the digital sum 
    int digitalSum = 0;
    for(int i = 0 ; i<count ; i++){
        arr[i+1]= arr[i] + arr[i+1];
        if(arr[i+1]>9){
            arr[i+1] = arr[i+1]%9;
        }
        digitalSum  = arr[i+1];        
    }

    cout<<"Digital Sum = "<<digitalSum<<endl;

    return 0;
}