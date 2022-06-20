/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution {
public:
    bool bs (int k){
        int s = 0;
        int e = k;
        long long mid = s+(e-s)/2;
        bool sqr = false;
        while(s<=e){
            long long c = mid*mid;
            if(c== k){
                return true;
            }
            else if(c >k){
                e = mid-1;
            }
            else if(c<k){
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return false;
    }
    bool isPerfectSquare(int num) {

        return bs(num);
    }
};
// @lc code=end

