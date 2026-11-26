/*
 * DATE: 16/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/two-sneaky-digits-of-digitville/description/?envType=problem-list-v2&envId=hash-table
 * PROBLEM STATEMENT: You are given an array of integers nums containing 2 * n + 2 elements. All elements except two appear exactly twice. Your task is to find the two elements that appear only once.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * We can use a hash map to store the frequency of each number in the nums array. Then, we iterate through the hash map and collect the keys that have a frequency of 1, which are the two numbers that appear only once. This approach has a time complexity of O(n), where n is the length of the nums array.
 * Weekly Contest 415: This problem was part of LeetCode Weekly Contest 415.
 * __________________________________________________
 *
 */

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map <int,int> mp;
        vector<int> arr;
        for (int a:nums){
            mp [a]++;
        }
        for (auto [key,value]:mp){
            if (value>1){
                arr.push_back(key);
            }
        }
        return arr;
    }
};