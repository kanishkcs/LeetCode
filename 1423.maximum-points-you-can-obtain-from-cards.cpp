/*
 * @lc app=leetcode id=1423 lang=cpp
 *
 * [1423] Maximum Points You Can Obtain from Cards
 */

// @lc code=start
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = static_cast<int>(cardPoints.size());
        int score = std::reduce(cardPoints.begin(), cardPoints.begin() + k);
        if (k == n) return score;
        int max_score = score;
        for (int end = k - 1, start = n - 1; end >= 0; --end, --start) {
            score += cardPoints[start] - cardPoints[end];
            max_score = std::max(max_score, score);
        }
        return max_score;
    }
};
// @lc code=end

