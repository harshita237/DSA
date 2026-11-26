/*
 * DATE: 12/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/restore-finishing-order/description/?envType=problem-list-v2&envId=hash-table
 * PROBLEM STATEMENT: You are given two integer arrays order and friends. The order array represents the finishing order of a race, and the friends array represents the participants who are your friends. Your task is to restore the finishing order of your friends based on the order array.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Vector is used to store the elements of the order array that are also present in the friends array. We iterate through the order array and for each element, we check if it exists in the friends array. If it does, we add it to the result vector.
 * __________________________________________________
 *
 */

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> arr;
        for (int a:order){
            for (int b:friends){
                if (a==b){
                    arr.push_back(a);
                }
            }
        }
        return arr;
    }
};