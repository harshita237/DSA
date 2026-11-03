/*
 * DATE: 03/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/richest-customer-wealth/description/?envType=problem-list-v2&envId=prshgx6i
 * PROBLEM STATEMENT: You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Nested arrays
 * __________________________________________________
 *
 */

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth=0;
        for (int i=0;i<accounts.size();i++){
            int sum=0;
            for (int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            if (sum>wealth){
                wealth=sum;
            }
        }
        return wealth;
    }
};