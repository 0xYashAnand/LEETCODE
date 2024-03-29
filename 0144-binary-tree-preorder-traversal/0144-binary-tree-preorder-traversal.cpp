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
   void Preorder(vector<int> &res, TreeNode* root){
        if(root==nullptr) return;    
        res.emplace_back(root->val);
        Preorder(res, root->left);
        Preorder(res, root->right);
    }
    vector<int> preorderTraversal(TreeNode * root){
        // Write your code here.
        vector<int> res;
        Preorder(res, root);
        return res;
    }
};