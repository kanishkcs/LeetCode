/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
         stack<char> st;
        for(char ss:s){
            if(ss == '(' || ss == '{' || ss == '['){
                st.push(ss);
            }
            else{  if(st.empty()){
                    return false;}
                    char cc = st.top();st.pop();
                    if(ss == ')' and cc == '(' || ss == '}' and cc == '{' || ss == ']' and cc == '['){
                       continue;
                    }
                    else{
                        return false;
                    }
            
            }
        }
        return st.empty();
    }
};
// @lc code=end

