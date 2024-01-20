class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode *prev = NULL,*cur = head,*nxt = head->next;
        while(cur){
            cur->next = prev;
            prev = cur;
            cur = nxt;
            if(nxt)nxt = nxt->next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(!head || !head->next)return ;
        ListNode *c1=head,*c2 = head->next;
        while(c2 && c2->next){
            c2=c2->next->next;
            c1 = c1->next;
        }
        c1->next = reverse(c1->next);
        c2 = c1->next;
        c1->next = NULL;
        c1 = head;
        while(c2){
            ListNode *t1 = c1->next,*t2 = c2->next;
            c1->next = c2;
            c2->next = t1;
            c2 = t2;
            c1 = t1;
        }
    }
};