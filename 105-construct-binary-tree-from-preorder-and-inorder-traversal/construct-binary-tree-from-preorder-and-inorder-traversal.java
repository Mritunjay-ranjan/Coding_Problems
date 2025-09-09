/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    Map<Integer, Integer> inorderMap;
    int preorderIndex;
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        inorderMap = new HashMap<>();
        preorderIndex = 0;
        for(int i=0;i<inorder.length;i++){
            inorderMap.put(inorder[i], i);
        }
        return arrToTree(preorder, 0, preorder.length-1);
    }

    public TreeNode arrToTree(int[] preorder, int left, int right){
        if(left>right){
            return null;
        }
        int rootVal = preorder[preorderIndex];
        preorderIndex++;
        TreeNode root = new TreeNode(rootVal);
        TreeNode leftNode = arrToTree(preorder, left, inorderMap.get(rootVal)-1);
        TreeNode rightNode = arrToTree(preorder, inorderMap.get(rootVal)+1, right);
        root.left = leftNode;
        root.right = rightNode;
        return root;
    }
}