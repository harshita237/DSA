/*
 * DATE: 18/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/palindrome-number/
 * PROBLEM STATEMENT: Given an integer x, return true if x is a palindrome, and false otherwise.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * C++ datatypes, operators, conditional statements
 * __________________________________________________
 *
 */

class Solution {
public:
    bool isPalindrome(int x) {
        int y;
        long long num=x,rev=0;
        if (x<0){
            return false;
        }
        else{
            while (num>0){
                int y=num%10;
                num=floor(num/10);
                rev=rev*10+y;
            }
            if (rev==x){
                return true;
            }
            else{
                return false;
            }
            
        }
        
    }
};
