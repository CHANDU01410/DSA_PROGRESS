class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0;
        
        int maxlen=0;
       int hash[256]={0};
 for(int r=0;r<n;r++){
    if(hash[s[r]]>l){
        l=hash[s[r]];
    }
    hash[s[r]]=r+1;
    maxlen=max(maxlen,r-l+1);
 }
 return maxlen;
        
    }
};