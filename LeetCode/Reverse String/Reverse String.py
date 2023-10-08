class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        x = 0
        for i in range(int(len(s)/2)):
            temp = s[i]
            s[i] = s[-1 + x]
            s[-1 + x] = temp
            x -= 1
