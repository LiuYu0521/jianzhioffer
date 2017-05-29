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
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        bool result = false;
        if(pRoot1 && pRoot2)
        {
            if(pRoot1->val == pRoot2->val)
                result = DoesTree1HaveTree2(pRoot1, pRoot2);
            if(!result)
                result = HasSubtree(pRoot1->left, pRoot2);
            if(!result)
                result = HasSubtree(pRoot1->right, pRoot2);
        }
        return result;
    }
    bool DoesTree1HaveTree2(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if(!pRoot2)
            return true;
        if(!pRoot1)
            return false;
        if(pRoot1->val != pRoot2->val)
            return false;
        return DoesTree1HaveTree2(pRoot1->left, pRoot2->left) && DoesTree1HaveTree2(pRoot1->right, pRoot2->right);
    }
};
