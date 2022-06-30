/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>merg;
       
        for(int x:nums1){
            merg.push_back(x);
        }
        for(int x:nums2){
            merg.push_back(x);
        }
        sort(merg.begin(),merg.end());
        int s =0,e=merg.size()-1,mid  = s+(e-s)/2;
        if(merg.size()%2==0){
            float x  = (merg[mid]+merg[mid+1])/2.0;
            return x;
        }
        else{
            return merg[mid];
        }
    }
};
// @lc code=end

