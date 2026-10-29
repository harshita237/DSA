/*
 * DATE: 29/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/find-words-containing-character/?envType=problem-list-v2&envId=prshgx6i
 * PROBLEM STATEMENT: Return an array of indices representing the words that contain the character x.
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
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> nums;
        for (int i=0;i<words.size();i++){
            for (int j=0;j<words[i].size();j++){
                if (words[i][j]==x){
                    nums.push_back(i);
                    break;
                }
            }
        }
        return nums;
    }
};