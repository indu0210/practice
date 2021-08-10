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
class twoSumTree {
    TreeNode real_root;
    public boolean findTarget(TreeNode root, int k) {
        if(root.left==null && root.right==null)
            return false;
        real_root=root;
        return find(real_root,k,real_root);
    }
    public boolean find(TreeNode real_root, int k, TreeNode root) {
        if(root==null)return false;
        TreeNode res=search(real_root,k-root.val);
        if(res!=null && res!=root)
            return true;
        return find(real_root,k,root.left) || find(real_root,k,root.right);
    }
    public TreeNode search(TreeNode root,int data){
        if(root==null)return null;
        if(root.val==data)return root;
        else if(data<root.val)return search(root.left,data);
        else return search(root.right,data);
    }

}
