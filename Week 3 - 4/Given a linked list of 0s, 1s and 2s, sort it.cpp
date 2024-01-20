#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node *h1=NULL,*h2=NULL,*h3=NULL;
        Node *c = head,*c1=NULL,*c2=NULL,*c3=NULL;
        while(c){
            if(c->data == 0){
                if(!c1)c1 = c;
                if(h1)h1->next = c;
                h1 = c;
            }
            else if(c->data == 1){
                if(!c2)c2 = c;
                if(h2)h2->next = c;
                h2 = c;
            }
            else{
                if(!c3)c3 = c;
                if(h3)h3->next = c;
                h3 = c;
            }
            c = c->next;
        }
        if(h3)h3->next = NULL;
        if(c1){
            if(c2){
                h1->next = c2;
                h2->next = c3;
            }
            else{
                h1->next = c3;
            }
            return c1;
        }
        else{
            if(c2){
                h2->next = c3;
                return c2;
            }
            else{
                return c3;
            }
        }
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}