/*
 * DATE: 10/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/plus-one/description/
 * PROBLEM STATEMENT: Given a non-empty array of digits representing a non-negative integer, increment the integer by one.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * array, vector, mathematical concepts.
 * __________________________________________________
 *
 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i=digits.size()-1;i<digits.size();i--){
            if (digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};