/*simple linked list implementation

#include<iostream>
using namespace std;
struct Node // to store the data and the address of next node at one place we use the best data structure i.e struct.
{
int data;
Node *next; // here Node is a self referencial structure the reason we have this is every node is having the address of next node and every node is of same data type so we use Node.
Node (int x) /// we used a constructure to initialize the data or we can use class also to represent a node instead of constructure
{
    data = x;
    next = NULL;
}
};
int main()
{
    Node *head = new Node(10);
    // Node *temp = new Node(20);
    // Node *temp2 = new Node(30);
    // temp ->next = temp;
    // temp -> next = temp2;  
    
    //instead of creatingg temp and temp2 variables we can also do it in a short way

    head -> next = new Node(20);
    head->next->next = new Node(30);
    cout<<"The value stored at the first node is "<<head->data<<endl;
}*/


/*Traversing LL

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printlist(Node *head)
{
    while(head != NULL)
    {
        cout<<(head -> data)<<" ";
        head = head->next;
    }
}
int main()
{
    Node *head = new Node(10);
    printlist(head);
    printlist(head);
}*/

/*Recursive traversial of singly ll

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printlist(Node *head)
{
    if(head == NULL)
    {
        return;
    }
    cout<<(head->data)<<" ";
    printlist(head->next);
}
int main()
{
    Node *head = new Node(10);
    printlist(head);
    printlist(head);
}*/

/*Insert at Begin in LL

#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;   
}
int main()
{
    Node *head = NULL;
    head = insertBegin(head,30);
    head = insertBegin(head,20);
    head = insertBegin(head,10);
    return 0;
}*/

/*insert at the end in single linked list

#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head == NULL)
    {
        return temp;
    }
    else
    {
        Node *curr = head;
        while(curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = temp;
        return head;
    }
}
int main()
{
    Node *head = NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    return 0;
}*/

// Remove Nth Node From End of List

#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
 Node* removeNthFromEnd(Node* head, int n) {
        Node *temp = new Node(0);
        temp->next = head;
        Node *first = temp;
        Node *second = temp;
        for(int i=0;i<n;i++)
        {
            first = first->next;
        }
        while(first->next != NULL)
        {
            first = first->next;
            second = second->next;
        }
        second->next = second->next->next;
        return temp->next;
        
    }
int main()
{
    Node *head = NULL;
    head = removeNthFromEnd(head,10);
    head = removeNthFromEnd(head,20);
    head = removeNthFromEnd(head,30);
    return 0;
}
