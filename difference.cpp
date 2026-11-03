/*
 * DATE: 03/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/?envType=problem-list-v2&envId=prshgx6i
 * PROBLEM STATEMENT: Given an integer number n, return the difference between the product of its digits and the sum of its digits.
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
    int subtractProductAndSum(int n) {
        int sum=0,product=1,d;
        while (n>0){
            d=n%10;
            sum=sum+d;
            product=product*d;
            n=n/10;
        }
        return product-sum;
    }
};