///////////////////////////////////////////////////////////
// ID: 3223
// Problem: Minimum Length of String After Operations
// Difficulty: Medium
//------------------------------------------------------
// Time Complexity: O(n)
// Space Complexity: O(1)
//------------------------------------------------------
// Author: AmeHibiki
// Date: 2025.1.11
///////////////////////////////////////////////////////////

class Solution {
public:
    int minimumLength(string s) {
        vector<int> freq(26);
        for(auto c : s) freq[c - 'a']++;
        int ans = 0;
        for(int i=0 ; i<26 ; i++){
            if(freq[i] < 3) ans += freq[i];
            else ans += (2 - (freq[i] % 2));
        }
        return ans;
    }
};