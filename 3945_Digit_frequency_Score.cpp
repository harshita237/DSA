/*
 * DATE: 13/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/digit-frequency-score/description/?envType=problem-list-v2&envId=hash-table
 * PROBLEM STATEMENT: You are given a positive integer n. The digit frequency score of n is defined as the sum of each digit multiplied by its frequency in n. Your task is to calculate the digit frequency score of n.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */

class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum=0;
        unordered_map <int,int> mp;
        while (n>0){
            int d=n%10;
            n=n/10;
            mp[d]++;
        }
        for (auto [key,value]:mp){
            sum=sum+key*value;
        }
        return sum;
    }
};