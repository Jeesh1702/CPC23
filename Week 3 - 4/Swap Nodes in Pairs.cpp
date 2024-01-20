class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode *c = head->next;
        head->next = swapPairs(c->next);
        c->next = head;
        return c;
    }
};