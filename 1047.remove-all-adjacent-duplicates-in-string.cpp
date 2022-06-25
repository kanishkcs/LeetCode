/*
 * @lc app=leetcode id=1047 lang=cpp
 *
 * [1047] Remove All Adjacent Duplicates In String
 */

// @lc code=start
class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        for(int i = 0;i<n;){
           
            int chars = (int)s[i];
            int char2 = (int)s[i+1];

            if((chars^char2) == 0){
                string parts ="";
                parts += s[i];
                parts += s[i+1];
                i = 0;
                s.erase(s.find(parts),parts.length());
                i =0 ;
                continue;
            }
            i++;
        }
        return s;
    }
};
// @lc code=end

