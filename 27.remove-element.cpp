/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        for(int x: nums){
            if(x==val){
                continue;
            }
            else{
                ans.push_back(x);
            }
        }
        nums = ans;
        return nums.size();
    }
};
// @lc code=end

