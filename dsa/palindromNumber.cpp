#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        bool isPalindrom(int n){
               if(n<0) return false;
            
            long long reverse_num = 0, temp = n;

            while(temp != 0){
                int last_digit = temp%10;
                reverse_num = reverse_num*10+last_digit;
                temp /= 10;
             }           
            return (n == reverse_num);   
        }

};

int main(){
    Solution T;
    long int x;

    cout<<"Enter the number : ";
    cin>>x;
    cout<<T.isPalindrom(x)<<endl;
    return 0;
}

// #include <iostream>

// bool isPalindrome(int n) {
//     // Negative numbers are generally not considered palindromes (e.g., -121 reads 121- in reverse)
//     if (n < 0) {
//         return false;
//     }

//     long long reverse_num = 0;
//     long long temp = n; // Use long long to prevent potential overflow when reversing large integers

//     // Reverse the number
//     while (temp != 0) {
//         int last_digit = temp % 10;
//         reverse_num = reverse_num * 10 + last_digit;
//         temp /= 10;
//     }

//     // Check if the original number is equal to its reverse
//     return (n == reverse_num);
// }

// int main() {
//     int number;

//     std::cout << "Enter a number: ";
//     std::cin >> number;

//     if (isPalindrome(number)) {
//         std::cout << number << " is a Palindrome number." << std::endl;
//     } else {
//         std::cout << number << " is not a Palindrome number." << std::endl;
//     }

//     return 0;
// }
