/*
 * DATE: 26/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/check-if-the-sentence-is-pangram/?envType=problem-list-v2&envId=prshgx6i
 * PROBLEM STATEMENT: Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.


 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Hash map , size of hash map
 * __________________________________________________
 *
 */

class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map <char,int> mp;
        if (sentence.size()<26){
            return false;
        }
        else{
            for (char a:sentence){
                mp [a]++;
            }
            if (mp.size()<26){
                return false;
            }
            else{
                return true;
            }
        }
    }
};