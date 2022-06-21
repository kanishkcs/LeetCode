/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        bool flagss = true;
        for(int i = 0;i<s.size();i+2){
            if(s[i] != s[i+1]){
                flagss = false;
            }
        }
        return flagss;
    }
};
// @lc code=end

