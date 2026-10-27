/*
 * DATE: 27/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/sum-multiples/?envType=problem-list-v2&envId=prshgx6i
 * PROBLEM STATEMENT: Given a positive integer n, find the sum of all integers in the range [1, n] inclusive that are divisible by 3, 5, or 7.
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
    int sumOfMultiples(int n) {
        int sum=0;
        for (int i=0;i<=n;i++){
            if ((i%3==0)||(i%5==0)||(i%7==0)){
                sum=sum+i;
            }
        }
        return sum;
    }
};