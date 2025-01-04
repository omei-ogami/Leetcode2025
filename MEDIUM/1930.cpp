/////////////////////////////////////////////////////////
// ID: 1930
// Problem: Unique Length-3 Palindromic Subsequences
// Difficulty: Medium
//----------------------------------------------------
// Time Complexity: O(n)
// Space Complexity: O(n)
//----------------------------------------------------
// Author: AmeHibiki
// Date: 2025.1.4
/////////////////////////////////////////////////////////

class Solution {
public:
    int solve(string& sub){
        unordered_set<char> count(sub.begin(), sub.end());
        return count.size(); 
    }
    int countPalindromicSubsequence(string s) {
        int n = s.size(), res = 0;
        unordered_map<char, pair<int, int>> range;
        for(int i=0 ; i<n ; i++) {
            if(range.find(s[i]) == range.end()) range[s[i]] = {i, i};
            else range[s[i]].second = i;
        }
        for(auto i : range){
            if(i.second.first < i.second.second){
                string sub = s.substr(i.second.first+1, i.second.second - i.second.first - 1);
                res += solve(sub);
            }
        }
        return res;
    }
};