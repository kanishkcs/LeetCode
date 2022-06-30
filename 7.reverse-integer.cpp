/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        long long reverses =0 ;
        bool neg = false;
        
        if(x<0){
            x =abs(x);
            neg = true;
        }
        while(x>0){
            
        reverses = reverses *10+ x%10;
        x =x/10;
        }
        if(neg){
           reverses =  reverses*(-1);
        }
        if( reverses >INT_MAX || reverses <INT_MIN){
            return 0;
        }
     return reverses;   
    }
};
// @lc code=end

