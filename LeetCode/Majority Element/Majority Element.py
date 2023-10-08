class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        l = len(nums)
        nums.sort()
        counter = 1
        for i in range(l):
            if i < l-1:
                if nums[i] == nums[i+1]:
                    counter += 1
            if counter > int(l/2):
                return nums[i]
            if nums[i] != nums[i+1]:
                counter = 1
        return nums[0]
