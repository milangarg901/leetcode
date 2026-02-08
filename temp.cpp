class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int n = s.size();
        int ans = 0;
        if(n==0)
        return 0;
        vector<int> fre(256, 0);
        while (j < n && i < n) {
            if (fre[s[j]] > 0) {
                fre[s[i]]--;
                i++;
            } else {
                fre[s[j]]++;
                j++;
            }
            cout << ans;
            ans = max(ans, j - i);
        }
        return ans;
    }
};