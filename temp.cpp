class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n == 0) return 0;

        int i = 0, j = 0;
        int ans = 0;
        vector<int> freq(256, 0);

        while(j < n){
            unsigned char ch = (unsigned char)s[j];
            if(freq[ch] > 0){
                unsigned char left = (unsigned char)s[i];
                freq[left]--;
                i++;
            }else{
                freq[ch]++;
                j++;
                ans = max(ans, j - i);
            }
        }

        return ans;
    }
};
