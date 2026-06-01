class Solution:
    def partition(self, s: str) -> List[List[str]]:
        res = []
        part = []

        def isPali(s,l,r):
            print(s)
            while(l<r):
                if(s[l] != s[r]):
                    return False
                l+=1
                r-=1
            return True

        def dfs(s,part,i,j):
            if(j >= len(s)):
                if(i == j):
                    res.append(part.copy())
                return
            sub = s[i:j+1]
            if(isPali(sub, 0, len(sub)-1)):
                part.append(s[i:j+1])
                dfs(s,part,j+1,j+1)
                part.pop()
            
            dfs(s,part,i,j+1)
        
        dfs(s,part,0,0)
        return res


            