/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct ReturnPair
{
    int diameter;
    int depth;
};

struct ReturnPair diameterOfBinaryTreeCore(struct TreeNode *root);
int Max2(int a, int b);
int Max3(int a, int b, int c);

int diameterOfBinaryTree(struct TreeNode* root)
{
    return diameterOfBinaryTreeCore(root).diameter;
}

struct ReturnPair diameterOfBinaryTreeCore(struct TreeNode *root)
{
    struct ReturnPair left, right, pair;

    if(root == NULL)
    {
        pair.diameter = 0;
        pair.depth = 0;
    }
    else
    {
        left = diameterOfBinaryTreeCore(root->left);
        right = diameterOfBinaryTreeCore(root->right);

        pair.diameter = Max3(left.diameter, right.diameter, left.depth + right.depth);
        pair.depth = Max2(left.depth, right.depth) + 1;
    }

    return pair;
}

int Max2(int a, int b)
{
    return (a > b ? a : b);
}

int Max3(int a, int b, int c)
{
    if(a > b)
    {
        if(b > c)
        {
            return a;
        }
        else
        {
            if(a > c)
            {
                return a;
            }
            else
            {
                return c;
            }
        }
    }
    else
    {
        if(b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
