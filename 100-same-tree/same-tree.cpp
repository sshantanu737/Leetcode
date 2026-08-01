/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 
class Solution {
public:
void preOrder(TreeNode *root,vector<int>&v){
       if(root == NULL){
            v.push_back(10001);
            return;
       }
       v.push_back(root -> val);
       preOrder(root -> left,v);
       preOrder(root -> right,v);
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>vp,vq;
        preOrder(p,vp);
        preOrder(q,vq);
    
       if(vp == vq){
        return true;
       }
       return false;
    }
};