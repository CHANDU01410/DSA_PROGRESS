class Solution:
    def maxProfit(self, prices: list[int]) -> int:
      profit=0
      maxprofit=0
      minprice=prices[0]
      for i in range(1,len(prices)):
        profit=prices[i]-minprice
        maxprofit=max(maxprofit,profit)
        minprice=min(prices[i],minprice)
      return maxprofit    