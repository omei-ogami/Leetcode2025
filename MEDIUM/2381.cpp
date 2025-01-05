/////////////////////////////////////////////////////////
// ID: 2381
// Problem: Shifting Letters II
// Difficulty: Medium
//----------------------------------------------------
// Time Complexity: O(n+m)
// Space Complexity: O(n+m)
// Where n = s.length and m = shifts.length
//----------------------------------------------------
// Author: AmeHibiki
// Date: 2025.1.5
/////////////////////////////////////////////////////////

class Solution {
public:
    char shiftCharacter(char c, int shift) {
        shift = shift % 26;
        return 'a' + (c - 'a' + shift + 26 ) % 26;
    }

    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size(), m = shifts.size();
        vector<int> prefix(n+1);
        for(int i=0 ; i<m ; i++){
            int start = shifts[i][0], end = shifts[i][1] + 1;
            int c = (shifts[i][2])? 1 : -1;
            prefix[start] += c, prefix[end] -= c;
        }
        s[0] = shiftCharacter(s[0], prefix[0]);
        for(int i=1 ; i<n ; i++){
            prefix[i] += prefix[i-1];
            s[i] = shiftCharacter(s[i], prefix[i]);
        }
        return s;
    }
};