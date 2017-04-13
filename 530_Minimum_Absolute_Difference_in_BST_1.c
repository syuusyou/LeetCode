/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int findMax(struct TreeNode *root);
 int findMin(struct TreeNode *root);

int getMinimumDifference(struct TreeNode* root)
{
    int leftMinDiff, rightMinDiff;
    int leftMax, rightMin;
    int ret;

    if(root == NULL)
    {
        return INT_MAX;
    }

    leftMinDiff = getMinimumDifference(root->left);
    rightMinDiff = getMinimumDifference(root->right);

    ret = leftMinDiff;
    if(ret > rightMinDiff)
    {
        ret = rightMinDiff;
    }

    if(root->left)
    {
        leftMax = findMax(root->left);
        if(ret > root->val - leftMax)
        {
            ret = root->val - leftMax;
        }
    }

    if(root->right)
    {
        rightMin = findMin(root->right);
        if(ret > rightMin - root->val)
        {
            ret = rightMin - root->val;
        }
    }

    return ret;
}

int findMax(struct TreeNode *root)
{
    if(root->right)
    {
        return findMax(root->right);
    }
    else
    {
        return root->val;
    }
}

int findMin(struct TreeNode *root)
{
    if(root->left)
    {
        return findMin(root->left);
    }
    else
    {
        return root->val;
    }
}
