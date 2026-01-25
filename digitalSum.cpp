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


//This program to converting any number to digital sum for mathematical approach 
// #include <iostream>
// using namespace std;

// //these function for the counting the digits and use call by value
// int counter(long long int num){
//     int count = 0;
//     int digitSum = 0;
//     while(num>0){
//         digitSum += num%10;
//         num /= 10;
//         count++;
//     }
//     return count;
// }

// int main(){
//     long long int num= 0;
//     cout<<"Enter the number : ";
//     cin>>num;
//     int count = counter(num);
    
    
//     long long int digitalSum = 0;
//     //two condition of this approach to when the counter is one or other case when counter is run more than one times.
//     if(count>1){
//         long long int arr[count];

//         for(int i = 0 ; i<count; i++)
//         {
//             arr[i] = num%10;
//             num = num/10;
//         }

//         //this loop run to count-1 times 
//         for(int i = 0 ; i<count-1 ; i++)
//         {
//             arr[i+1] = arr[i] + arr[i+1];
            
//             if(arr[i+1]>9){
//                 arr[i+1] = arr[i+1]%9;
//             }
//             digitalSum  = arr[i+1];
//         }
//         cout<<"Digital Sum = "<<digitalSum<<endl;
//     }else{
//         cout<<"Digital Sum = "<<num<<endl;
//     }
//     return 0;
// }

//for better approach use vector to digital sum 
#include <iostream>
#include <vector>
using namespace std;

int64_t counter(int64_t num){
    int32_t count = 0;
    int digiSum = 0;
    while(num>0){
        digiSum += num%10;
        num = num/10;
        count++;
    }
    return count;
}

int main(){
    int64_t num;
    cout<<"Enter the number : ";
    cin>>num;
    int64_t digits = counter(num);
    vector <int> vec;
    
    int temp = 0;

    for(int i = 0; i<digits;i++){
        temp = num%10;
        num = num/10;
        vec.push_back(temp);
    }
    
    int tempDigi = 0;
    for(int i = 0;i<digits; i++){
        vec[i+1] = vec[i]+vec[i+1];
        if(vec[i+1]>9){
            vec[i+1] = vec[i+1]%9;
        }
        tempDigi = vec[i+1];
    }

    cout<<"Digital Sum = "<<tempDigi<<endl;
    return 0;
}
    