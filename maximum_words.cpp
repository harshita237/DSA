/*
 * DATE: 04/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/?envType=problem-list-v2&envId=prshgx6i
 * PROBLEM STATEMENT: You are given an array of strings sentences, where each sentences[i] represents a single sentence.

Return the maximum number of words that appear in a single sentence.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Nested loops
 * __________________________________________________
 *
 */

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count,max=0;
        for (int i=0;i<sentences.size();i++){
            count=1;
            for (int j=0;j<sentences[i].size();j++){
                if (sentences[i][j]==' '){
                    count++;
                }
            }
            if (count>max){
                max=count;
            }
        }
        return max;
    }
};