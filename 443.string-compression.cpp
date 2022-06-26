/*
 * @lc app=leetcode id=443 lang=cpp
 *
 * [443] String Compression
 */

// @lc code=start
class Solution {
public:
    int compress(vector<char>& chars) {
        
        string ans="";
        for(int i =0 ;i<chars.size();i++){
            if(ans.size()!=0){
                if(chars[i]==chars[i-1]){
                    continue;
                }
            }
            int count =0;
            for(int j = i;j<chars.size();j++){
                if(chars[i] == chars[j]){
                    count ++;
                }
                else{
                    break;
                }
            }
            
            ans += chars[i];
            if(count == 1){
                continue;
            }
            else{
                if(count >9){
                    int ones = count%10;
                    int singles = count/10;
                    // for Greater then 10
                    ans += to_string(singles);
                    ans += to_string(ones);
                }
                else{
                    ans += to_string(count);
                }

            }
            
        }
        chars.erase(chars.begin(),chars.end());
        for(char x:ans){
            chars.push_back(x);
        }
        return chars.size();
    }
};
// @lc code=end

