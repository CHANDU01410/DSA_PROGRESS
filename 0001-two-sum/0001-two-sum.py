class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        ans={}
        for i in range(len(nums)):
            needed=target-nums[i]
            if needed in ans:
                return [ans[needed],i]
            ans[nums[i]]=i    





