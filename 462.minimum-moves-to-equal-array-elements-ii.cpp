/*
 * @lc app=leetcode id=462 lang=cpp
 *
 * [462] Minimum Moves to Equal Array Elements II
 */

// @lc code=start
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size ();
        sort (nums.begin(), nums.end());
        int mid = n/2, i = 0, count = 0;
        for (i = 0; i < n; i++)
            count += abs (nums [i] - nums [mid]);
        return count;
    }
};
// @lc code=end

