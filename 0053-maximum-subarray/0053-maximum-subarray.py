class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        if len(nums)==0 :
            return 0
        sum=0
        maxsum=nums[0]
        for i in range(len(nums)):
            sum=sum+nums[i]
            maxsum=max(sum,maxsum)
            if sum<0:
                sum=0
            
        return maxsum