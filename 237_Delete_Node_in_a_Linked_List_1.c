/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node)
{
    struct ListNode *current = node;

    while(current->next->next)
    {
        current->val = current->next->val;
        current = current->next;
    }

    current->val = current->next->val;
    free(current->next);
    current->next = NULL;
}
