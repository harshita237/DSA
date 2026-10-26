/*
 * DATE: 26/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/first-unique-character-in-a-string/description/?envType=problem-list-v2&envId=prshgx6i
 * PROBLEM STATEMENT: Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Hash map(https://www.geeksforgeeks.org/cpp/how-to-use-hashmap-in-cpp/)
 * __________________________________________________
 *
 */
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char,int> mp;
        for (char c:s){
            mp [c]++;
        }
        for (int i=0;i<=s.size();i++){
            if (mp[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};