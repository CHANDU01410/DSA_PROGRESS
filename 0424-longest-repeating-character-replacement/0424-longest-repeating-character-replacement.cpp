class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        int freq[26] = {0};
        int maxFreq = 0;
        int maxlen = 0;
        while (r < s.size()) {
            freq[s[r] - 'A']++;
            maxFreq = max(maxFreq, freq[s[r] - 'A']);
            int replacements = (r - l + 1) - maxFreq;
            while (replacements > k) {
                freq[s[l]-'A']--;
                l++;
                 replacements = (r - l + 1) - maxFreq;
            }
            maxlen = max(maxlen, r - l + 1);
            r++;
        }

        return maxlen;
    }
};