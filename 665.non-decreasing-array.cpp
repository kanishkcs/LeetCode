/*
 * @lc app=leetcode id=665 lang=cpp
 *
 * [665] Non-decreasing Array
 */

// @lc code=start
class Solution {
public:

bool checkPossibility(vector<int>& nums) {
		int cnt=0;
		for(int i=0;i<nums.size()-1;i++){

			if(nums[i]>nums[i+1]){
	
				int range1=0,range2=0;
				if(i!=0){
					range1=nums[i+1]-nums[i-1];
				}
				if(i+2<nums.size()){
					range2=nums[i+2]-nums[i];
				}
				if(range1<0 and range2<0){
					return false;
				}
				 cnt++;
			}

		}
		return cnt<=1;
	}
};
// @lc code=end

