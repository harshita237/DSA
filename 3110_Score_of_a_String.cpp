/*
 * DATE: 21/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/score-of-a-string/description/?envType=problem-list-v2&envId=string
 * PROBLEM STATEMENT: Given a string s consisting of lowercase English letters, the score of the string is defined as the sum of the absolute differences between the ASCII values of adjacent characters in the string. Return the score of the string s.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * In this problem, we can calculate the score of the string by iterating through the string and calculating the absolute difference between the ASCII values of adjacent characters. We can then sum these differences to get the total score of the string.
 * Biweekly Contest 128
 * __________________________________________________
 *
 */

class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for (int i=0;i<s.size()-1;i++){
            score+= abs((int)s[i]-(int)s[i+1]);
        }
        return score;
    }
};