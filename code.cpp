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
    void check(TreeNode* root1, vector<int>&vec1){
        if(root1==NULL) return;
        check(root1->left,vec1);
        if(root1->left==NULL && root1->right==NULL){
            vec1.push_back(root1->val);
        }
        check(root1->right,vec1);
    }
    void check1(TreeNode* root2 , vector<int>&vec2){
        if(root2==NULL) return;
        check1(root2->left,vec2);
        if(root2->left==NULL && root2->right==NULL){
            vec2.push_back(root2->val);
        }
        check1(root2->right,vec2);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vec1,vec2;
        check(root1,vec1);
        check1(root2,vec2);
        if(vec1==vec2) return true;
        return false;
    }  
};
