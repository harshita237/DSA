/*
 * DATE: 14/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/number-of-good-pairs/description/?envType=problem-list-v2&envId=hash-table
 * PROBLEM STATEMENT: You are given an array of integers nums. A pair of indices (i, j) is called good if nums[i] == nums[j] and i < j. Return the number of good pairs.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * We can use a brute force approach to solve this problem by using two nested loops to check all pairs of indices (i, j) in the array. If nums[i] == nums[j] and i < j, we increment the count of good pairs. This approach has a time complexity of O(n^2), where n is the size of the input array.
 * Weekly Contest 197: This problem was part of LeetCode Weekly Contest 197.
 *
 */

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for (int i=0;i<nums.size();i++){
            for (int j=i+1;j<nums.size();j++){
                if (nums[i]==nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};