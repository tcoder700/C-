//  LEETCODE
//   To check if a number is palindrome or not including negative and positive numbers
//  Errors recieved -
//  1.) didnt think of the case when the input number is zero (zero is a palindrome)
//  2.)Signed integer limit exceeded beyond 99999999*10 .Fixed it by changing the data types from int to long long int


class Solution {
public:
    bool isPalindrome(int x) {
        
        long long int temp = x ; long long int rev=0;
        while (temp >0){
             rev = rev*10 + temp%10;
            temp = temp/10;
        }
        if(rev == x && x>=0)
            return true;
        else
            return false;
    }
};

