# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def findTarget(self, root, k):
        """
        :type root: Optional[TreeNode]
        :type k: int
        :rtype: bool
        """
        arr=[]
        self.inOrder(arr,root,0)
        myMap={}
        ind=0
        for i in arr:
            if i in myMap:
                return True
            myMap[k-i]=ind
            ind+=1
        return False

    def inOrder(self,arr, curr,i=0):
    
        if curr is None:
            return

        self.inOrder(arr,curr.left,i+1)
        arr.append(curr.val)
        self.inOrder(arr,curr.right,i+1)


    