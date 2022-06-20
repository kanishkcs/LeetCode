/*
 * @lc app=leetcode id=1752 lang=cpp
 *
 * [1752] Check if Array Is Sorted and Rotated
 */

// @lc code=start

    class Solution {
    public:
        bool check(vector<int>& nums) {
            int n = nums.size();
            int pair = 0;
            for(int i =1;i<n;i++){
                if(nums[i-1]>nums[i]){
                    pair++;
                }
                
            }
            if(nums[n-1]>nums[0]){
                pair++;
            }
            if(pair > 1){
                return false;
            }
            return true;
        }
    };
// @lc code=end

