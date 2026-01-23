#include <iostream>
using namespace std;

long long digitalSum(long long int num)
{   
    long long int digiSum = 0;
    while (num > 0) {
        digiSum += num % 10;
        num = num / 10;
    }

    if(digiSum>0 && digiSum<=9){
        return digiSum;
    }else{
        
        long long int temp = 0;
        while (digiSum >0 ){
            temp = temp + digiSum%10;
            digiSum =digiSum/10;
        }
        
        if(temp>0 and temp<=9){
            return temp;
        }else{
            long long int temp1 = 0;
            while (temp >0 ){
                temp1 = temp1 + temp%10;
                temp =temp/10;
            }
        }
    }
}

int main()
{
    long long int num = 0;
    cout<<"Enter the number is : ";
    cin>>num;
    // long long int temp = digiSum(num);
    if(digitalSum(num)== 0){
        cout<<"Your Digital Sum is : 0 or 9 "<<endl;
    }else{
    cout << "Your Digital Sum is : " <<digitalSum(num)<<endl;}
    return 0;
}