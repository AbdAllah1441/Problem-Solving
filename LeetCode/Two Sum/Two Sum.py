class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        x = len(nums)
        for i in range(x):
            j = i + 1
            while j < x:
                if nums[i] + nums[j] == target:
                    return [i, j]
                j += 1
