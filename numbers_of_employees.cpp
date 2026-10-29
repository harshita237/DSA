/*
 * DATE: 29/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/number-of-employees-who-met-the-target/description/?envType=problem-list-v2&envId=ntcdww16
 * PROBLEM STATEMENT: Return the integer denoting the number of employees who worked at least target hours.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * C++ Vectors
 * __________________________________________________
 *
 */

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count=0;
        for (int i=0;i<hours.size();i++){
            if (hours[i]>=target){
                count++;
            }
        }
        return count;
    }
};