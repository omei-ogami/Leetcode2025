////////////////////////////////////////////////////////////////////////////
// ID: 2657
// Problem: Find the Prefix Common Array of Two Arrays
// Difficulty: Medium
//---------------------------------------------------------------------
// Time Complexity: O(n)
// Space Complexity: O(n)
//---------------------------------------------------------------------
// Author: AmeHibiki
// Date: 2025.1.14
////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size(), cur = 0;
        vector<int> ans, freq(n+1);
        for(int i=0 ; i<n ; i++){
            if(++freq[A[i]] == 2) cur++;
            if(++freq[B[i]] == 2) cur++;
            ans.push_back(cur);
        }
        return ans;
    }
};