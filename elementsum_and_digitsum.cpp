/*
 * DATE: 05/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/?envType=problem-list-v2&envId=prshgx6i
 * PROBLEM STATEMENT: Return the absolute difference between the element sum and digit sum of nums.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * abs() function- gives the absolute difference of numbers
 * __________________________________________________
 *
 */

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int d_sum=0,e_sum=0;
        for (int i=0;i<nums.size();i++){
            d_sum=d_sum+nums[i];
            if (nums[i]<9){
                e_sum=e_sum+nums[i];
            }
            else{
                int n=nums[i];
                while(n>0){
                    int d=n%10;
                    e_sum=e_sum+d;
                    n=n/10;
                }
            }
        }
        return abs(d_sum-e_sum);
    }
};