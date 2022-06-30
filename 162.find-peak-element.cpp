/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution {
public:
    int peak(vector<int> ar){
        int s = 0;
        int e = ar.size()-1;
        int mid = s+(e-s)/2;
        while(s<e){
        if(ar[mid]< ar[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
        
        
        }

        return mid;
       

    }
    int findPeakElement(vector<int>& nums) {
        return peak(nums);
    }
};
// @lc code=end

