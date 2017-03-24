/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int largestLevel(struct TreeNode *root);
void largestValuesInner(struct TreeNode *root, int *numsReturn, int level);

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* largestValues(struct TreeNode* root, int* returnSize)
{
    int *numsReturn, i;

    *returnSize = largestLevel(root);
    numsReturn = (int *)malloc(sizeof(int) * (*returnSize));
    for(i = 0; i < (*returnSize); i++)
    {
        numsReturn[i] = INT_MIN;
    }

    largestValuesInner(root, numsReturn, 0);

    return numsReturn;
}

int largestLevel(struct TreeNode *root)
{
    int left, right;

    if(root == NULL)
    {
        return 0;
    }

    left = largestLevel(root->left);
    right = largestLevel(root->right);

    return left > right ? left + 1 : right + 1;
}

void largestValuesInner(struct TreeNode *root, int *numsReturn, int level)
{
    if(root == NULL)
    {
        return;
    }

    if(root->val > numsReturn[level])
    {
        numsReturn[level] = root->val;
    }

    largestValuesInner(root->left, numsReturn, level + 1);
    largestValuesInner(root->right, numsReturn, level + 1);
}
