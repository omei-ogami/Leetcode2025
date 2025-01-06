/////////////////////////////////////////////////////////////////////////
// ID: 1769
// Problem: Minimum Number of Operations to Move All Balls to Each Box
// Difficulty: Medium
//---------------------------------------------------------------------
// Time Complexity: O(n)
// Space Complexity: O(n)
//---------------------------------------------------------------------
// Author: AmeHibiki
// Date: 2025.1.6
/////////////////////////////////////////////////////////////////////////

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n);
        int ballsToLeft = 0, movesToLeft = 0, ballsToRight = 0, movesToRight = 0;
        for(int i=0 ; i<n ; i++){
            ans[i] += movesToLeft;
            ballsToLeft += boxes[i] - '0';
            movesToLeft += ballsToLeft;
            int j = n - i - 1;
            ans[j] += movesToRight;
            ballsToRight += boxes[j] - '0';
            movesToRight += ballsToRight;
        }
        return ans;
    }
};