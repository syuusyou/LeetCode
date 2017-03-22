/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode *head, *tail;
    int carry;
    
    head = tail = (struct ListNode *)malloc(sizeof(struct ListNode));
    tail->next = NULL;
    
    while(true)
    {
        tail->val = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        if(tail->val > 9)
        {
            tail->val -= 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        
        if(l1)
        {
            l1 = l1->next;
        }
        if(l2)
        {
            l2 = l2->next;
        }
        
        if(!l1 && !l2 && !carry)
        {
            break;
        }
        
        tail->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        tail = tail->next;
        tail->next = NULL;
    }

    return head;
}
