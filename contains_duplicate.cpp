/*
 * DATE: 07/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/contains-duplicate/description/
 * PROBLEM STATEMENT: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Hashmap concepts
 * __________________________________________________
 *
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int a:nums){
            mp [a]++;
        }
        for (auto [key,value]:mp){
            if (value>1){
                return true;
            }
        }
        return false;
    }
};