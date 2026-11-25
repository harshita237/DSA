/*
 * DATE: 24/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/
 * PROBLEM STATEMENT: Given an array of integers where each integer is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in the array.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * hashmap concepts, Vector concepts
 * __________________________________________________
 *
 */

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> arr;
        for (int i:nums){
            mp [i]++;
        }
        for (int i=1;i<=nums.size();i++){
            if (mp[i]==0){
                arr.push_back(i);
            }
        }
        return arr;
    }
};