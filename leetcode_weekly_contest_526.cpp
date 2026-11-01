/*
 * DATE: 01/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/contest/weekly-contest-526/problems/minimum-value-of-merged-integers/description/
 * PROBLEM STATEMENT: You are given an integer array nums of even length n.

You have to merge the elements of nums in pairs by merging nums[0] with nums[1], nums[2] with nums[3], and so on, until nums[n - 2] with nums[n - 1].

Return the minimum value among all the resulting merged integers.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Typecasting
 * __________________________________________________
 *
 */

class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int min=stoi(to_string(nums[0]) + to_string(nums[1]));
        for (int i=2;i<(nums.size()-1);i=i+2){
            int m=stoi(to_string(nums[i]) + to_string(nums[i+1]));
            if (m<min){
                min=m;
            }
        }
        return min;
    }
};
