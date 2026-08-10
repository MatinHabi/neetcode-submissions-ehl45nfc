class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res = []
        n = len(nums)
        used = [False] * n
        curr = []

        def dfs():
            if(len(curr) == n):
                res.append(curr[:])
                return
            
            for i in range(n):
                if used[i]:
                    continue
                
                used[i] = True
                curr.append(nums[i])
                dfs()

                used[i] = False
                curr.pop()

        dfs()
        
        return res
            
        
