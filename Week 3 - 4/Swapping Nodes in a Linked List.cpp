class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *c1=head,*c2=head;
        for(int i=1;i<k;i++){
            c1=c1->next;
        }
        int n=0;
        while(c2){
            c2=c2->next;
            n++;
        }
        c2 = head;
        for(int i=0;i<n-k;i++){
            c2 = c2->next;
        }
        int temp = c1->val;
        c1->val = c2->val;
        c2->val = temp;
        return head;
    }
};