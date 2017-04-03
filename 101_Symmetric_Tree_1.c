/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isMirror(struct TreeNode *a, struct TreeNode *b);

bool isSymmetric(struct TreeNode* root)
{
    if(root)
    {
        return isMirror(root->left, root->right);
    }
    else
    {
        return true;
    }
}

bool isMirror(struct TreeNode *a, struct TreeNode *b)
{
    if(a != NULL && b != NULL)
    {
        if(a->val != b->val)
        {
            return false;
        }
        else
        {
            return isMirror(a->left, b->right) && isMirror(a->right, b->left);
        }
    }
    else if(a == NULL && b == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
