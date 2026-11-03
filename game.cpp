/*
 * DATE: 03/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/find-if-digit-game-can-be-won/description/?envType=problem-list-v2&envId=prshgx6i
 * PROBLEM STATEMENT: You are given an array of positive integers nums.

Alice and Bob are playing a game. In the game, Alice can choose either all single-digit numbers or all double-digit numbers from nums, and the rest of the numbers are given to Bob. Alice wins if the sum of her numbers is strictly greater than the sum of Bob's numbers.

Return true if Alice can win this game, otherwise, return false.
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
    bool canAliceWin(vector<int>& nums) {
        int single=0,d=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]<10){
                single=single+nums[i];
            }
            else{
                d=d+nums[i];
            }
        }
        if (single!=d){
            return true;
        }
        else{
            return false;
        }
    }
};