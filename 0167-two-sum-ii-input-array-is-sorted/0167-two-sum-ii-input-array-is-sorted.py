class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        myMap={}
        index=0
        for i in numbers:
            if i in myMap:
                return [myMap[i]+1,index+1]
            myMap[target-i]=index
            index+=1