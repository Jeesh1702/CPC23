class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *c1 = head, *c2 = head,*h = NULL;
        while(c2){
            int i = 0;
            ListNode *c3 = c2;
            while(c2 && c2->val == c3->val){
                c2 = c2->next;
                i++;
            }
            if(i==1){   
                if(!h)h = c3;
                c1->next = c3;
                c1 = c3;
            }
        }
        if(c1)c1->next = NULL;
        return h;
    }
};