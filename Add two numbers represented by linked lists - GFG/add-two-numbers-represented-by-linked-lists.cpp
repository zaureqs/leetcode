//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node* reverseList(Node* head) 
    {
        Node* curr = head;
        Node* prev = NULL;
        Node* nextnode = head;

        while(nextnode != NULL)
        {
            nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }    
        return prev;
    }
    struct Node* addTwoLists(struct Node* l1, struct Node* l2)
    {
        l1 = reverseList(l1);
        l2 = reverseList(l2);
        Node* start = new Node(-1);
        Node* curr = start;
        int carry = 0;
        while(l1 && l2)
        {
            carry += (l1->data + l2->data);
            curr->next = new Node(carry%10);
            carry /= 10;
            curr = curr->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1)
        {
            carry += (l1->data);
            curr->next = new Node(carry%10);
            carry /= 10;
            curr = curr->next;
            l1 = l1->next;
        }
        while(l2)
        {
            carry += (l2->data);
            curr->next = new Node(carry%10);
            carry /= 10;
            curr = curr->next;
            l2 = l2->next;
        }
        while(carry)
        {
            curr->next = new Node(carry%10);
            carry /= 10;
            curr = curr->next;
        }
        return reverseList(start->next);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends