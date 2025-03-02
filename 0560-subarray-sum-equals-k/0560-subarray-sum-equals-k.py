class Solution(object):
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        n=len(nums)
        map=defaultdict(int)
        prefixsum=0
        cnt=0
        map[0]=1
        for i in range(n):
              prefixsum+=nums[i]
              remove=prefixsum-k
              cnt+=map[remove]
              map[prefixsum]+=1
        return cnt    
        