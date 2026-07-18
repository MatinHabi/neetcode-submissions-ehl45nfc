class Solution:
    def longestPalindrome(self, s: str) -> str:
        res = ""
        resLen = 0
        n = len(s)

        #odd length
        for i in range(n):
            r,l = i,i
            while r < n and l >= 0 and s[l] == s[r]:
                if r-l+1 > resLen:
                    res = s[l:r+1]
                    resLen = r-l+1
                r+=1
                l-=1
        
        #even length
        for i in range(n):
            r,l = i+1,i
            while r < n and l >= 0 and s[l] == s[r]:
                if r-l+1 > resLen:
                    res = s[l:r+1]
                    resLen = r-l+1
                r+=1
                l-=1

        return res