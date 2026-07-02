class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        result=[]
        l=0
        r=len(numbers)-1
        while l<r:
            add=numbers[l]+numbers[r]
            if add>target:
                r-=1
            elif add<target:
                l+=1
            else:
                return [l+1,r+1]