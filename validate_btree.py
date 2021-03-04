# Definition for a binary tree node.0
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution(object):
    def validate(self,root,mini,maxi):
        if root==None:
            return True
        if maxi!=None and root.val >= maxi:
            return False
        if mini!=None and root.val <= mini:
            return False        
        return self.validate(root.left,mini,root.val) and self.validate(root.right,root.val,maxi)
    
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        return self.validate(root,None,None)
