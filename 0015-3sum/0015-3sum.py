class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        result=[]
        nums.sort()
        for i,x in enumerate(nums):
            if i>0 and x==nums[i-1]:
                continue
            l=i+1
            r=len(nums)-1
            while(l<r):
                    Sum=x+nums[l]+nums[r]
                    if Sum>0:
                        r-=1
                    elif Sum<0: 
                        l+=1
                    else:
                        result.append([x,nums[l],nums[r]])
                        l+=1
                        while nums[l]==nums[l-1] and l<r :
                            l+=1
        return result


        