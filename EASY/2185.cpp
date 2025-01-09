/////////////////////////////////////////////////////////
// ID: 2185
// Problem: Counting Words With a Given Prefix
// Difficulty: Easy
//----------------------------------------------------
// Time Complexity: O(n * m)
// Space Complexity: O(1)
// where n = words.length and m = pref.length
//----------------------------------------------------
// Author: AmeHibiki
// Date: 2025.1.9
/////////////////////////////////////////////////////////

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = words.size(), m = pref.size(), ans = 0;
        for(int i=0 ; i<n ; i++){
            int len = words[i].size();
            if(len >= m){
                bool flag = true;
                for(int j=0 ; j<m ; j++){
                    if(words[i][j] != pref[j]){
                        flag = false;
                        break;
                    }
                }
                ans += flag;
            }
        }
        return ans;
    }
};