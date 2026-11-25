/*
 * DATE: 08/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/find-mismatched-segments-between-two-strings/description/
 * PROBLEM STATEMENT: Find Mismatched Segments Between Two Strings
 * __________________________________________________
 * 

 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Vector concepts 
 * __________________________________________________
 *
 */

class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> result;
        string s,ss;
        for (int i=0;i<s1.size();i++){
            if (s1[i]!=s2[i]){
                s+=s1[i];
                ss+=s2[i];
            }
            else{
                if (!s.empty()){
                    result.push_back({s,ss});
                    s.clear();
                    ss.clear();
                }
            }
        } 
        if (!s.empty()){
            result.push_back({s,ss});
        }
        return result;
    }
    
};