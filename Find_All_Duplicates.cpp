/*
 * DATE: 25/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
 * PROBLEM STATEMENT: Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice. You must write an algorithm that runs in O(n) time and uses only constant extra space.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Hashmap concepts, Vector concepts
 * __________________________________________________
 *
 */

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> arr;
        for (int i:nums){
            mp [i]++;
        }
        for (auto [key,value]:mp){
            if (value==2){
                arr.push_back(key);
            }
        }
        return arr;
    }
};