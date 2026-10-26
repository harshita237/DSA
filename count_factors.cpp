/*
 * DATE: 26/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/count-the-digits-that-divide-a-number/?envType=problem-list-v2&envId=prshgx6i
 * PROBLEM STATEMENT: Given an integer num, return the number of digits in num that divide num.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */

class Solution {
public:
    int countDigits(int num) {
        int n=num,d,count=0;
        while (n>0){
            d=n % 10;
            n=n / 10;
            if ((num % d)==0){
                count++;
            }
        }
        return count;
    }
};