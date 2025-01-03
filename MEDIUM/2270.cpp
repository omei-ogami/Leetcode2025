/////////////////////////////////////////////////////////
// ID: 2270
// Problem: Number of Ways to Split Array
// Difficulty: Medium
//----------------------------------------------------
// Time Complexity: O(n)
// Space Complexity: O(1)
//----------------------------------------------------
// Author: AmeHibiki
// Date: 2025.1.3
/////////////////////////////////////////////////////////

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long n = nums.size(), first = 0, second = 0, ans = 0;
        for(int i=0 ; i<n ; i++) second += nums[i];
        for(int i=0 ; i<n-1 ; i++){
            first += nums[i];
            second -= nums[i];
            if(first >= second) ans++;
        }
        return ans;
    }
};