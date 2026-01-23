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
        while (digiSum >1){
            temp = temp + digiSum%10;
            digiSum /= 10;
        }
        return temp;
    }
}

int main()
{
    long long int num = 0;
    cout<<"Enter the number is : ";
    cin>>num;
    cout << "Your Digital Sum is : " << digitalSum(num)<<endl;
    return 0;
}