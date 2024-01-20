#include <bits/stdc++.h>
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
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node *c1=NULL,*c2=NULL,*h1=NULL,*h2=NULL,*c=head;
        while(c){
            if(c->data%2){
                if(!h1)h1 = c;
                if(c1)c1->next = c;
                c1 = c;
            }
            else{
                if(!h2)h2 = c;
                if(c2)c2->next = c;
                c2 = c;
            }
            c = c->next;
        }
        if(c1)c1->next = NULL;
        if(c2){
            c2->next = h1;
            return h2;
        }
        else{
            return h1;
        }
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}