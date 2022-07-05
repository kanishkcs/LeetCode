/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1){
            return nums.size();
        }
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int count = 1;
        
        for(int i =1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i] -1 == nums[i-1]){
                count +=1;
            }
            
            else{
                ans.push_back(count);
                count = 1;
            }
            
            ans.push_back(count);
        }
        ans.push_back(count);
        return *max_element(ans.begin(),ans.end());
    }
};
// @lc code=end

1,2,3,4,100,200