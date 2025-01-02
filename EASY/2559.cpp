/////////////////////////////////////////////////////////
// ID: 2559
// Problem: Count Vowel Strings in Ranges
// Difficulty: Easy
//----------------------------------------------------
// Time Complexity: O(n+m)
// Space Complexity: O(n+m)
// where n = words.length and m = queries.length
//----------------------------------------------------
// Author: AmeHibiki
// Date: 2025.1.2
/////////////////////////////////////////////////////////

class Solution {
public:
    bool isValid(string& s){
        return (vowels.find(s[0]) != vowels.end()) && (vowels.find(s.back()) != vowels.end());
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size(), m = queries.size();
        vector<int> prefix(n+1), ans(m);
        for(int i=0 ; i<n ; i++) prefix[i+1] = prefix[i] + isValid(words[i]);
        for(int i=0 ; i<m ; i++) ans[i] = prefix[queries[i][1]+1] - prefix[queries[i][0]];
        return ans;
    }

private:
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
};