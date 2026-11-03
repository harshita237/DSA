/*
 * DATE: 03/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/sign-of-the-product-of-an-array/description/?envType=problem-list-v2&envId=prshgx6i
 * PROBLEM STATEMENT: Implement a function signFunc(x) that returns:

1 if x is positive.
-1 if x is negative.
0 if x is equal to 0.
You are given an integer array nums. Let product be the product of all values in the array nums.

Return signFunc(product).
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
    int arraySign(vector<int>& nums) {
        int neg=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==0){
                return 0;
            }
            else if (nums[i]<0){
                neg++;
            }
        }
        if ((neg%2)!=0){
            return -1;
        }
        else{
            return 1;
        }
    }
};