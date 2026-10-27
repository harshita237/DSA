/*
 * DATE: 27/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/?envType=problem-list-v2&envId=prshgx6i
 * PROBLEM STATEMENT: You are given positive integers n and m.

Define two integers as follows:

num1: The sum of all integers in the range [1, n] (both inclusive) that are not divisible by m.
num2: The sum of all integers in the range [1, n] (both inclusive) that are divisible by m.
Return the integer num1 - num2.
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
    int differenceOfSums(int n, int m) {
        int num1=0,num2=0;
        for (int i=1;i<=n;i++){
            if (i%m==0){
                num2=num2+i;
            }
            else{
                num1=num1+i;
            }
        }
        return (num1-num2);
    }
};