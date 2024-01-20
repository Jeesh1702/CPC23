class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *c1 = head, *c2 = head;
        while(c1){
            while(c2 && c2->val == c1->val)c2 = c2->next;
            c1->next = c2;
            c1 = c2;
        }
        return head;
    }
};