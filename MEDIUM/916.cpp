////////////////////////////////////////////////////////////////////////////
// ID: 916
// Problem: Word Subsets
// Difficulty: Medium
//---------------------------------------------------------------------
// Time Complexity: O(n + m + n*k)
// Space Complexity: O(1)
// Where n = words1.length, m = words2.length, k = max(word.length)
//---------------------------------------------------------------------
// Author: AmeHibiki
// Date: 2025.1.10
////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int n = words1.size(), m = words2.size();
        vector<string> ans;
        vector<int> freq(26), cur(26);
        for(int i=0 ; i<m ; i++){
            for(auto c : words2[i]) cur[c - 'a']++;
            for(int i=0 ; i<26 ; i++){
                freq[i] = max(freq[i], cur[i]);
                cur[i] = 0;
            }
        }
        for(int i=0 ; i<n ; i++){
            for(auto c : words1[i]) cur[c - 'a']++;
            bool flag = true;
            for(int i=0 ; i<26 ; i++){
                if(freq[i] > cur[i]) flag = false;
                cur[i] = 0;
            }
            if(flag) ans.push_back(words1[i]);
        }
        return ans;
    }
};