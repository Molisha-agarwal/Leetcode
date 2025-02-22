class Solution(object):
    def twoSum(self, nums, target):
        n=len(nums)
        hashmap={}
        for i in range(n):
            a=nums[i]
            moreneeded=target-a
            if moreneeded in hashmap:
                return hashmap[moreneeded],i
            hashmap[a]=i
    
        return -1,1        

        
              
                    
        
        