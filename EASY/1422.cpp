/////////////////////////////////////////////////////////
// ID: 1422
// Problem: Maximum Score After Splitting a String
// Difficulty: Easy
//----------------------------------------------------
// Time Complexity: O(n)
// Space Complexity: O(n)
//----------------------------------------------------
// Author: AmeHibiki
// Date: 2025.1.1
/////////////////////////////////////////////////////////

class Solution {
public:
    int maxScore(string s) {
        int n = s.size(), ans = 0, count = 0;
        vector<int> suffix(n+1);
        for(int i=n-1 ; i>=0 ; i--){
            suffix[i] = suffix[i+1] + (s[i] - '0');
        }
        if(s[0] == '0') count++;
        ans = max(ans, count + suffix[1]);
        for(int i=1 ; i<n-1 ; i++){
            if(s[i] == '0') count++;
            ans = max(ans, count + suffix[i+1]);
        }
        return ans;
    }
};