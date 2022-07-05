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
        vector<int> counts;
        int count = 1;
        
        for(int i =0;i<nums.size()-1;i++){
            if(i == nums.size()-1 && count == nums.size()-1){
                count -=1;
                break;
            }
            if(nums[i] +1 == nums[i+1]){
                count +=1;
            }
            if(nums[i]== nums[i+1]) continue;
            else{
                counts.push_back(count);
                count = 1;
            }
            
            counts.push_back(count);
        }
        return *max_element(counts.begin(),counts.end());
    }
};
// @lc code=end

