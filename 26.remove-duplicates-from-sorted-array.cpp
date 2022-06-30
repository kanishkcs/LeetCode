/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        int tmp = INT_MIN;
        for(int i =0 ;i<nums.size();i++){
            
            if(tmp == nums[i]){
                continue;
            }
            ans.push_back(nums[i]);
            tmp = nums[i];

        }
        nums = ans;
        return nums.size();
    }
};
// @lc code=end

