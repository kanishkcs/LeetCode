/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0){
            return 0;
        }
        int count = 1;
        for(int i =0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                count++;
            }
        }
        return count;
    }
};
// @lc code=end

