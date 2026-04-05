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
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        if(root->left== NULL && root->right == NULL){
            return 1;
        }
        int left, right;
        if(root->left == NULL) {
            left = INT_MAX;
        }
        else{
            left = minDepth(root->left);
        }

        if(root->right == NULL) {
            right = INT_MAX;
        }
        else{
            right = minDepth(root->right);
        }
        return min(left, right) + 1; 
    }
};