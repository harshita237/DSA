/*
 * DATE: 19/10/2026
 *
 * PROBLEM LINK: https://www.geeksforgeeks.org/problems/prime-number2314/1
 * PROBLEM STATEMENT: Given a number n, determine whether it is a prime number or not.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * functions, conditional statements
 * __________________________________________________
 *
 */

class Solution {
  public:
    bool isPrime(int n) {
        int count=0;
        // code here
        if (n==1){
            return false;
        }
        else{
            for (int i=2;i<n;i++){
                if (n%i==0){
                    count=1;
                    return false;
                    break;
                }
            if (count!=0){
                return true;
            }
            }
        }
    }
};
