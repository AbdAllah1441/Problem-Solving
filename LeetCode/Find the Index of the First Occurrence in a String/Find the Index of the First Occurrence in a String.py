class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        c = 1
        for i in range(len(haystack) - len(needle) + 1):
            k = i
            for j in range(len(needle)):
                if haystack[i] != needle[j]:
                    c = 0
                    break
                i = i + 1
            i = k
            if c == 1:
                return i
            c = 1
        return -1               
