class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0:
            return ""
        j = 0
        prefix = ""
        while j < len(strs[0]):
            i = 0
            while i < len(strs) - 1:
                if j >= len(strs[i]) or j >= len(strs[i + 1]):
                    return prefix
                elif strs[i][j] != strs[i + 1][j]:
                    return prefix
                i += 1
            prefix = prefix + strs[0][j] 
            j += 1
        return prefix
