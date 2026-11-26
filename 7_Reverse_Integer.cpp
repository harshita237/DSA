/*
 * DATE: 09/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/reverse-integer/description/?favoriteSlug=google-thirty-days
 * PROBLEM STATEMENT: Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Mathematical concepts.
 * __________________________________________________
 *
 */

class Solution {
public:
    int reverse(int x) {
        signed int n=x,rev=0;
        while (n!=0){
            int d=n%10;
            n=n/10;
            if (rev > INT_MAX/10 || rev < INT_MIN/10){
                return 0;
            }
            rev=rev*10+d;
        }
        return rev; 
    }
};