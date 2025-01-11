/////////////////////////////////////////////////////////
// ID: 1400
// Problem: Construct K Palindrome Strings
// Difficulty: Medium
//----------------------------------------------------
// Time Complexity: O(n)
// Space Complexity: O(1)
//----------------------------------------------------
// Author: AmeHibiki
// Date: 2025.1.11
/////////////////////////////////////////////////////////

class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size(), m = 0;
        if(n < k) return false;
        vector<int> freq(26);
        for(auto c : s) freq[c - 'a']++;
        for(int i=0 ; i<26 ; i++) m += freq[i] % 2;
        return m <= k;
    }
};