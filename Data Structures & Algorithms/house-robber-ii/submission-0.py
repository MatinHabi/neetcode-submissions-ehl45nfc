class Solution:
    def rob(self, nums: List[int]) -> int:
        return max(nums[0], self.helper(nums[1:]), self.helper(nums[:-1]))

    def helper(self, nums):
        r1, r2 = 0,0

        for i in nums:
            newr = max(r1 + i, r2)
            r1 = r2
            r2 = newr
        return r2