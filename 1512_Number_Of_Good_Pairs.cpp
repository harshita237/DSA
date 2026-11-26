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
 * 
 * __________________________________________________
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