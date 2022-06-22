/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */
// Code BY Kanishk kashyap

// @lc code=start
class Solution {
public:

     string reverseWords(string s) {
        int i=0,j=0;
        vector<string> store;
        while(i<s.size() and j<s.size()){
            string temp="";
            //while spaces are there move forward
            while(i<s.size() and s[i]==' '){
                i++;
            }
            j=i;
            //store the words in store vector
            while(j<s.size() and s[j]!=' '){
                temp+=s[j];
                j++;
            }
            i=j;
            store.push_back(temp);
        }
        string ans;
        //traverse the store vector for final result
        for(int i=store.size()-1;i>=0;i--){
            if(store[i]!="")ans+=store[i]+" "; //if to deal with example 2 type testcases
        }
        ans.pop_back();
        return ans;
    }
};
// @lc code=end

