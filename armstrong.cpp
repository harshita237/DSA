/*
 * DATE: 19/10/2026
 *
 * PROBLEM LINK: https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1
 * PROBLEM STATEMENT: You are given a 3-digit number n, Find whether it is an Armstrong number or not.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * While loop, operators
 * __________________________________________________
 *
 */

class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int num=n,sum=0,arm=0;
        while (num>0){
            int d=num%10;
            num=num/10;
            arm=arm+(d*d*d);
        }
        if (arm==n){
            return true;
        }
        else{
            return false;
        }
        
    }
};