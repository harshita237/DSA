/*
 * DATE: 17/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/maximum-substrings-with-distinct-start/description/?envType=problem-list-v2&envId=hash-table
 * PROBLEM STATEMENT: You are given a string s consisting of lowercase English letters. A substring of s is called distinct if all the characters in the substring are unique. Your task is to find the maximum number of distinct substrings that can be formed from s.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * For this problem, we can use a hash map to count the frequency of each character in the string. The number of distinct substrings that can be formed is equal to the number of unique characters in the string. Therefore, we can simply return the size of the hash map, which represents the count of unique characters.
 * Weekly Contest 478
 * __________________________________________________
 *
 */

class Solution {
public:
    int maxDistinct(string s) {
        unordered_map <char,int> mp;
        for (char a:s){
            mp [a]++;
        }
        return mp.size();
    }
};