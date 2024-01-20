#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

struct Node* arrange(Node *head);

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        head = arrange(head);
        printlist(head);
    }
	return 0;
}

struct Node* arrange(Node *head)
{
   //Code here
   Node *c1=NULL,*c2=NULL,*h1=NULL,*h2=NULL,*c=head;
        while(c){
            if(c->data != 'a' && c->data != 'e' && c->data != 'i' && c->data != 'o' && c->data != 'u'){
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