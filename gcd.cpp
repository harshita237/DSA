/*
 * DATE: 20/10/2026
 *
 * PROBLEM LINK: https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
 * PROBLEM STATEMENT: Given two positive integers a and b, find GCD of a and b.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * euclidean algorithm 
 * __________________________________________________
 *
 */

class Solution {
public:
    int gcd(int a, int b) {
            int rem;
            while (b > 0) {
                rem = a % b;
                a = b;
                b = rem;
            }
            return a;
    }
};