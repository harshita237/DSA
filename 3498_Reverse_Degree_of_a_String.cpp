/*
 * DATE: 20/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/reverse-degree-of-a-string/description/?envType=problem-list-v2&envId=string
 * PROBLEM STATEMENT: Given a string s consisting of lowercase English letters, the reverse degree of the string is defined as the sum of the reverse degrees of its characters. The reverse degree of a character is defined as the number of characters that are lexicographically greater than it in the string. Return the reverse degree of the string s.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * In this problem, we can calculate the reverse degree of each character by determining how many characters are lexicographically greater than it. We can iterate through the string and for each character, count the number of characters that are greater than it. The total reverse degree is the sum of these counts for all characters in the string.
 * Biweekly Contest 153
 * __________________________________________________
 *
 */

class Solution {
public:
    int reverseDegree(string s) {
        int count=0;
        for (int i = 0; i < s.size(); i++) {
            count += ('z' - s[i] + 1) * (i + 1);
        }
        return count;
    }
};