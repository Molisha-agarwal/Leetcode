class Solution(object):
    def merge(self, nums1, m, nums2, n):
        left = 0
        right = 0
        index = 0
        nums3 = [0] * (m + n)  

        while left < m and right < n:
            if nums1[left] <= nums2[right]:
                nums3[index] = nums1[left]
                left += 1
            else:
                nums3[index] = nums2[right]
                right += 1
            index += 1

        while left < m:
            nums3[index] = nums1[left]
            left += 1
            index += 1

        while right < n:
            nums3[index] = nums2[right]
            right += 1
            index += 1

        
        for i in range(m + n):
            nums1[i] = nums3[i]

        