class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        i=0
        while i<len(strs[0]):
            c= strs[0][i]
            for j in range(1,len(strs)):
                if i>=len(strs[j]) or strs[j][i]!=c:
                    return strs[0][:i]
            i+=1    
        return strs[0]        