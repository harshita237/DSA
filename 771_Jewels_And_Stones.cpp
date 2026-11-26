/*
 * DATE: 15/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/jewels-and-stones/description/?envType=problem-list-v2&envId=hash-table
 * PROBLEM STATEMENT: You are given two strings jewels and stones. The characters in jewels represent the types of stones that are jewels, and the characters in stones represent the stones you have. You want to know how many of the stones you have are also jewels.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * We can use a hash map to store the frequency of each stone in the stones string. Then, we iterate through the jewels string and sum up the frequencies of the jewels found in the hash map. This approach has a time complexity of O(n + m), where n is the length of the stones string and m is the length of the jewels string.
 * Weekly Contest 69: This problem was part of LeetCode Weekly Contest 69.
 * __________________________________________________
 *
 */

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        unordered_map <char,int> mp;
        for (char a:stones){
            mp [a]++;
        }
        for (char a:jewels){
            count=count+mp[a];
        }
        return count;
    }
};