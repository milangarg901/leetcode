/*
LeetCode 3. Longest Substring Without Repeating Characters
Approach:
- Use sliding window with last seen index for each character.
- Move left pointer when duplicate appears inside current window.
- Track maximum window length.

Time Complexity: O(n)
Space Complexity: O(1)  // fixed alphabet (ASCII)
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1);
        int l = 0, ans = 0;

        for(int r = 0; r < (int)s.size(); r++){
            unsigned char c = (unsigned char)s[r];
            if(last[c] >= l) l = last[c] + 1;
            last[c] = r;
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};
