/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    long long revers(int n){
        long long reverse_number =0;
        while(n>0){
            reverse_number = reverse_number*10+ n%10;
            n = n/10;

        }
        return reverse_number;
    }
    bool isPalindrome(int x) {
        if(revers(x)== x){
            return true;
        }
        return false;
    }
};
// @lc code=end

