class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        seen = {}
        size = len(nums)

        for i in range(size):
            seen[nums[i]] = i

        for i in range(len(nums)):
            second = target - nums[i] 
            if second in seen and seen[second] != i:
                return [i, seen[second]]
        
        return -1
