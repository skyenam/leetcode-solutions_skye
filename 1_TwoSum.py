class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """ 

        for i in range(len(nums)): 
                complement = target - nums[i]
                
                for j in range(len(nums)): 
                    if i != j and nums[j] == complement:
                        return [i, j]
                   
                    
