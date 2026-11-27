/*
 * DATE: 18/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/description/?envType=problem-list-v2&envId=hash-table
 * PROBLEM STATEMENT: 
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * We can use a hash map to count the frequency of each character in the string. We can then iterate through the hash map to find the maximum frequency of vowels and consonants separately. Finally, we return the sum of the maximum frequencies of vowels and consonants.
 * Biweekly Contest 156
 * __________________________________________________
 *
 */

class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map <char,int> mp;
        int vowel=0,consonant=0;
        for (char a:s){
            mp[a]++;
        }
        for (auto [a,v]:mp){
            if (a=='a' || a=='e' || a=='o' || a=='u' || a=='i'){
                vowel=max(vowel,v);
            }
            else{
                consonant=max(consonant,v);
            }
        }
        return vowel+consonant;
    }
};