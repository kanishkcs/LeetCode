/*
 * @lc app=leetcode id=557 lang=cpp
 *
 * [557] Reverse Words in a String III
 */

// @lc code=start
class Solution {
public:
    string reverses(string s){
        int start = 0;
        int end = s.size()-1;
        while(start<=end){
            swap(s[start],s[end]);
            start ++;
            end --;

        }
        return s;
    }
    string reverseWords(string s) {
        
        string word = "";
        string finals = "";
        
        for(int i = 0;i<s.size();i++){
            if(s[i] ==' '){
                finals += reverses(word);
                finals += ' ';
                word = "";
            }else{
                word += s[i];
            }
        }
        finals += reverses(word);
        return finals;

    }
};
// @lc code=end

