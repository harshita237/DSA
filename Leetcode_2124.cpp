/*
 * DATE: 19/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/description/?envType=daily-question&envId=2026-11-27
 * PROBLEM STATEMENT: Given a string s consisting of only characters 'a' and 'b', check if all occurrences of 'a' appear before all occurrences of 'b'.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * For this problem, we can simply check if the string contains the substring "ba". If it does, it means there is at least one 'b' that appears before an 'a', which violates the condition. If it does not contain "ba", then all 'a's appear before all 'b's.
 * Weekly Contest 274
 * __________________________________________________
 *
 */

class Solution {
public:
    bool checkString(string s) {
        return !s.contains("ba");
    }
};