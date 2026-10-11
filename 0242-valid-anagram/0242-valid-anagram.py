class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        hash={}
        for ch in s:
            hash[ch]=hash.get(ch,0)+1
           
        for ch in t:
           hash[ch]=hash.get(ch,0)-1
        for count in hash.values():
            if count!=0:
                return False
        return True              