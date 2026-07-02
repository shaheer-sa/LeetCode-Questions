class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        myMap={}
        index=0
        for i in nums:
            if i in myMap:
                return [myMap[i],index]
            myMap[target-i]=index
            index+=1
        