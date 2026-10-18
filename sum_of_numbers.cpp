/*
 * DATE: 17/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/add-digits/description/?envType=problem-list-v2&envId=math
 * PROBLEM STATEMENT: Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Concept of Modulo 9: When you divide a number by 9, its remainder is the same as the remainder you get by dividing the sum of its digits by 9.
 * __________________________________________________
 *
 */

class Solution {
public:
    int addDigits(int num) {
        if (num==0){
            return 0;
        }
        else if (num%9==0){
            return 9;
        }
        else{
            return num%9;
        }
        
    }
};
