/*
 * DATE: 26/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/stone-removal-game/description/?envType=daily-question&envId=2026-11-26
 * PROBLEM STATEMENT:Alice and Bob are playing a game where they take turns removing stones from a pile, with Alice going first.

Alice starts by removing exactly 10 stones on her first turn.
For each subsequent turn, each player removes exactly 1 fewer stone than the previous opponent.
The player who cannot make a move loses the game.

Given a positive integer n, return true if Alice wins the game and false otherwise.


 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Mathematical concepts, Biweekly Contest 144
 * __________________________________________________
 *
 */

class Solution {
public:
    bool canAliceWin(int n) {
        int count=0;
        if (n<10){
            return false;
        }
        else{
            for (int i=10;i>0;i--){
                n=n-i;
                count++;
                if (n<i-1){
                    break;
                } 
            }
            if (count%2==0){
                return false;
            }
        }
        return true;
    }
};