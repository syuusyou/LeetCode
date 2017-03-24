/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct ReturnVal
{
    int level;
    int val;
};

struct ReturnVal *findBottomLeftValueInner(struct TreeNode *root);

int findBottomLeftValue(struct TreeNode* root)
{
    int val;
    struct ReturnVal *tmp = findBottomLeftValueInner(root);

    val = tmp->val;
    free(tmp);

    return val;
}

struct ReturnVal *findBottomLeftValueInner(struct TreeNode *root)
{
    struct ReturnVal *tmp = NULL;
    struct ReturnVal *left = NULL;
    struct ReturnVal *right = NULL;

    if(root == NULL)
    {
        tmp = (struct ReturnVal *)malloc(sizeof(struct ReturnVal));
        tmp->val = 0;
        tmp->level = 0;

        return tmp;
    }

    if(root->left || root->right)
    {
        left = findBottomLeftValueInner(root->left);
        right = findBottomLeftValueInner(root->right);

        if(right->level > left->level)
        {
            right->level += 1;
            free(left);
            return right;
        }
        else
        {
            left->level += 1;
            free(right);
            return left;
        }
    }
    else
    {
        tmp = (struct ReturnVal *)malloc(sizeof(struct ReturnVal));
        tmp->val = root->val;
        tmp->level = 1;

        return tmp;
    }
}
