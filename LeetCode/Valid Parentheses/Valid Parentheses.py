class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        opening = ['{', '[', '(']
        closing = ['}', ']', ')']
        for i in range(len(s)):
            if s[i] in opening:
                stack.append(s[i])
            if s[i] in closing:
                if len(stack) == 0:
                    return False
                o = 1
                c = 0
                for x in range(len(closing)):
                    if s[i] == closing[x]:
                        c = x
                for y in range(len(opening)):
                    if stack[-1] == opening[y]:
                        o = y
                if o == c:
                    stack.pop()
                else:
                    stack.append(s[i])
        if len(stack) != 0:
            return False
        return True
