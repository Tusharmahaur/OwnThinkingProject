#include <iostream>
using namespace std;

// Iterative function to
// reverse digits of num
long long digitalSum(long long int num)
{
    long long int digiSum = 0;
    while (num > 0) {
        digiSum += num % 10;
        num = num / 10;
    }
    return digiSum;
}
// Driver code
int main()
{
    long long int num = 0;
    cout<<"Enter the number is : ";
    cin>>num;
    cout << "Your Digital Sum is : " << digitalSum(num)<<endl;
    return 0;
}