/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        int length = vin.size();
        if(length == 0) return nullptr;
        vector<int> left_pre, right_pre;
        vector<int> left_in, right_in;
        TreeNode* head = new TreeNode(pre[0]);
        int index = 0;
        for(int i = 0; i < length; ++i)
        {
            if(vin[i] == pre[0])
            {
                index = i;
                break;
            }
        }
        for(int i = 0; i < index; ++i)
        {
            left_in.push_back(vin[i]);
            left_pre.push_back(pre[i + 1]);
        }
        for(int j = index + 1; j<length; ++j)
        {
            right_in.push_back(vin[j]);
            right_pre.push_back(pre[j]);
        }
        head->left = reConstructBinaryTree(left_pre, left_in);
        head->right = reConstructBinaryTree(right_pre, right_in);
        return head;
    }
};
