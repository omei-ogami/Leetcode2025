///////////////////////////////////////////////////////////
// ID: 3042
// Problem: Count Prefix and Suffix Pairs I
// Difficulty: Easy
//------------------------------------------------------
// Time Complexity: O(n^2 * m)
// Space Complexity: O(1)
// where n = words.length and m = max(words[i].length)
//------------------------------------------------------
// Author: AmeHibiki
// Date: 2025.1.8
///////////////////////////////////////////////////////////

class Solution {
public:
    int match(string& s, string& t){
        int n = s.size(), m = t.size();
        if(n > m) return 0;
        for(int i=0 ; i<n ; i++){
            if(s[i] != t[i] || s[n-i-1] != t[m-i-1]) return false;
        }
        return 1;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size(), ans = 0;
        for(int i=0 ; i<n-1 ; i++){
            for(int j=i+1 ; j<n ; j++){
                ans += match(words[i], words[j]);
            }
        }
        return ans;
    }
};