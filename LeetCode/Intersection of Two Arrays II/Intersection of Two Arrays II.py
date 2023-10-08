class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums1.sort()
        nums2.sort()
        l1 = len(nums1)
        l2 = len(nums2)
        l3 = []
        i = 0
        j = 0
        if l1 > l2:
            while i < l1 and j < l2:
                if nums1[i] == nums2[j]:
                    l3.append(nums1[i])
                    j += 1
                    i += 1
                elif nums1[i] > nums2[j]:
                    j += 1
                else:
                    i += 1
        else:
            while i < l2 and j < l1:
                if nums1[j] == nums2[i]:
                    l3.append(nums1[j])
                    j += 1
                    i += 1
                elif nums1[j] < nums2[i]:
                    j += 1
                else:
                    i += 1
        return l3    
