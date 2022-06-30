/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle) != string::npos){ // Check if Exists or Not
            return haystack.find(needle);
        }
        else{
            return -1;
        }
    }
};
// @lc code=end

