class Solution {
public:
    ListNode* merge(ListNode* head1,ListNode* head2){
        ListNode *c1=head1,*c2=head2,*c=NULL,*head;
        // ListNode *c = new Listnode(0);
        while(c1 && c2){
            if(c1->val >= c2->val){
                if(!c)c=c2,head=c;
                else{
                    c->next = c2;
                    c=c->next;
                }
                c2 = c2->next;
            }
            else{
                if(!c)c=c1,head=c;
                else{
                    c->next = c1;
                    c=c->next;
                }
                c1 = c1->next;
            }
        }
        if(c1){
            if(!c)c=c1,head=c;
            else c->next=c1;
        }
        else{
            if(!c)c=c2,head=c;
            else c->next=c2;
        }
        return head;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode *c1=head,*c2=head->next;
        while(c2 && c2->next){
            c1 = c1->next;
            c2 = c2->next->next;
        }
        ListNode *head1=head,*head2=c1->next;
        c1->next = NULL;
        head1 = sortList(head1);
        head2 = sortList(head2);
        return merge(head1,head2);
    }
};