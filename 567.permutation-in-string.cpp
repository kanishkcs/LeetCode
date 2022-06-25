/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
class Solution {
public:

    bool checkEqual(int a[26],int b[26]){
        for (int i =0;i<26;i++){
            if(a[i] != b[i]){
                return false;
            }
            
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {

        // Storing the Count of s1
        int count1[26] ={0};
        int n = s1.length();
        for(int i = 0;i<n;i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }
        // Traversing s2 in window size of s1 for first Window
        int i = 0;
        int windowSize = n;
        int count2[26] = {0};
        while(i<windowSize and i<s2.length()){
            int index = s2[i]-'a';
            count2[index]++;
            i++;
        }
        // Checking if both are Equal or not
        if(checkEqual(count1,count2))
            return 1;
        
        // Repeatinf for whole s2, and managing the window
        while(i<s2.length()){
            char newChar  = s2[i];
            int index = newChar - 'a';
            count2[index]++;  // adding New Charcter to the Windo

            char oldChar = s2[i-windowSize];
            index = oldChar-'a';
            count2[index]--;  // Removing one old character from the Window
            i++;
            if(checkEqual(count1,count2))
                return 1;
        }
        return 0;


    }
};
// @lc code=end

