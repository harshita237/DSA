/*
 * DATE: 06/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/two-sum/description/
 * PROBLEM STATEMENT: You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Vector concepts
 * __________________________________________________
 *
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        for (int i=0;i<nums.size();i++){
            for (int j=i+1;j<nums.size();j++){
                if (nums[i]+nums[j]==target){
                    arr.push_back(i);
                    arr.push_back(j);
                }
            }
        }
        return arr;
    }
};