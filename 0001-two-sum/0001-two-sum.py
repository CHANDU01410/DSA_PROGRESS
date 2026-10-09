class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        ans={}
        for i in range(len(nums)):
            needed=target-nums[i]
            if needed in ans:
                return[ans[needed],i]
            ans[nums[i]]=i    
        