/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */
// code By Kanishk
// @lc code=start
class Solution {
public:
    char lowercase(char s){
        int c = s - 'A';
        char ans = c + 'a';
        return ans;
    }
    bool isPalindrome(string s) {
        string re = "";
        for(int i = 0;i<s.size();i++){
            int cast = (int)s[i];
            if( cast >= 65 && cast <= 90 ){
                re += lowercase(s[i]);
            }
            if( cast >= 97 && cast <=122 ){
                re += s[i];
            }
            if( cast >= 48 && cast <=57 ){
                re += s[i];
            }
            
        }
        int start =0;
        int end = re.size()-1;
        
        while(start<end){
            if(re[start] != re[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
// @lc code=end

