#include <iostream>
#include <stdio.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void append(struct Node** headRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)last = last->next;
	last->next = new_node;
}

void printList(struct Node *node)
{
    while(node!=NULL){
        printf("%d ", node->data);
        node = node->next;
    }
    cout<<endl;
} 

void alternatingSplitList(struct Node*); 

struct Node* a;
struct Node* b;

int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        a=b=NULL;
        struct Node* head = NULL;
        
        
        int n, k;
        cin>>n;
        
        while(n--)
        {
            cin>>k;
            append(&head, k);
        }
        
        alternatingSplitList(head);
        printList(a);
        printList(b);
    }
    return 0;
}

void alternatingSplitList(struct Node* head) 
{
    //Your code here
    a = NULL;
    b = NULL;
    int i=0;
    Node *c = head,*c1=a,*c2=b;
    while(c){
        if(i%2){
            if(c2)c2->next = c;
            c2 = c;
        }
        else{
            if(c1)c1->next = c;
            c1 = c;
        }
        // cout << c->data;
        c = c->next;
        i++;
    }
    if(c1)c1->next = NULL;
    if(c2)c2->next = NULL;
}