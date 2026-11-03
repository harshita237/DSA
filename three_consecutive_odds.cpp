/*
 * DATE: 03/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/three-consecutive-odds/?envType=problem-list-v2&envId=prshgx6i
 * PROBLEM STATEMENT: Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.
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
    bool threeConsecutiveOdds(vector<int>& arr) {
        if (arr.size() < 3) {
            return false;
        }
        for (int i=0;i<(arr.size()-2);i++){
            if ((arr[i]%2!=0) && (arr[i+1]%2!=0) && (arr[i+2]%2!=0)){
                return true;
            }
        }
        return false;
    }
};