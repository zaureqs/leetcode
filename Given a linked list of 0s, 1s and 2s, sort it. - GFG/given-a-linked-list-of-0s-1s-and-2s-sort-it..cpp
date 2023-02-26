//{ Driver Code Starts
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
        
        Node *zero_start = new Node(-1);
        Node *one_start = new Node(-1);
        Node *two_start = new Node(-1);
        Node* zero = zero_start;
        Node* one = one_start;
        Node* two = two_start;
        while(head)
        {
            if(head->data == 0)
            {
                zero->next = head;
                zero = zero->next;
            }
            else if(head->data == 1)
            {
                one->next = head;
                one = one->next;
            }
            else
            {
                two->next = head;
                two = two->next;
            }
            head = head->next;
        }
        if(zero_start->next == NULL && one_start->next == NULL && two_start->next ==NULL)
        {
            return NULL;
        }
        else if(zero_start->next == NULL && one_start->next == NULL)
        {
            return two_start->next;
        }
        if(zero_start->next == NULL && two_start->next ==NULL)
        {
            return one_start->next;
        }
        if(one_start->next == NULL && two_start->next ==NULL)
        {
            return zero_start->next;
        }
        if(zero_start->next == NULL)
        {
            one->next = two_start->next;
            two->next = NULL;
            return one_start->next;
        }
        if(one_start->next == NULL)
        {
            zero->next = two_start->next;
            two->next = NULL;
            return zero_start->next;
        }
        if(two_start->next == NULL)
        {
            zero->next = one_start->next;
            one->next = NULL;
            return zero_start->next;
        }
        zero->next = one_start->next;
        one->next = two_start->next;
        two->next = NULL;
        return zero_start->next;
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
// } Driver Code Ends