/*
 * DATE: 27/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/next-greater-element-i/description/?envType=problem-list-v2&envId=hash-table
 * PROBLEM STATEMENT: You are given two arrays (without duplicates) nums1 and nums2 where nums1’s elements are a subset of nums2. Find all the next greater numbers for nums1's elements in the corresponding places of nums2.
The Next Greater Number of a number x in nums1 is the first greater number to its right in nums2. If it does not exist, output -1 for this number.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Vector is used to store the next greater elements for each element in nums1. We iterate through nums1 and for each element, we find its position in nums2. Then we check the elements to the right of that position in nums2 to find the next greater element. If we find a greater element, we add it to the result vector; otherwise, we add -1.
 * __________________________________________________
 *
 */

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for (int i=0;i<nums1.size();i++){
            bool found=false;
            for (int j=0;j<nums2.size();j++){
                if (nums1[i]==nums2[j]){
                    for (int k=j+1;k<nums2.size();k++){
                        if (nums2[k]>nums1[i]){
                            arr.push_back(nums2[k]);
                            found=true;
                            break;
                        }
                    }
                    if (found==false){
                        arr.push_back(-1);
                    }
                }
            }
        }
        return arr;
    }
};