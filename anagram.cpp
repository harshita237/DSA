/*
 * DATE: 27/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/valid-anagram/?envType=problem-list-v2&envId=string
 * PROBLEM STATEMENT: Given two strings s and t, return true if t is an anagram of s, and false otherwise.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Concept of Anagram, hash map
 * __________________________________________________
 *
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> mp1,mp2;
        for (char a : s){
            mp1 [a]++;
        }
        for (char a:t){
            mp2 [a]++;
        }
        if (mp1==mp2){
            return true;
        }
        else{
            return false;
        }
    }
};