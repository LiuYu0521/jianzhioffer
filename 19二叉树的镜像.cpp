/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/
class Solution {
public:
    void Mirror(TreeNode *pRoot) {
        if(pRoot == nullptr)
            return;
        if(pRoot->left == nullptr && pRoot->right == nullptr)
            return;
        TreeNode* temp = pRoot->right;
        pRoot->right = pRoot->left;
        pRoot->left = temp;
        if(pRoot->left)
            Mirror(pRoot->left);
        if(pRoot->right)
            Mirror(pRoot->right);
    }
};
