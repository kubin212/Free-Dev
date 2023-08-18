#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

void printList(Node *n);
void insertFront(Node **head, int newVal);
void insertEnd(Node **head, int newVal);
void insertAfter(Node *node, int newVal);

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->val = 1;
    head->next = second;
    second->val = 2;
    second->next = third;
    third->val = 3;
    third->next = NULL;

    insertFront(&head, 6);
    insertEnd(&head, 90);
    insertAfter(second, 77);

    printList(head);
    return 0;
}

void printList(Node *n)
{
    while(n!=NULL)
    {
        cout << n->val << endl;
        n = n->next;
    }
}

void insertFront(Node **head, int newVal)
{
    Node *newNode = new Node();
    newNode->val = newVal;
    newNode->next = *head;
    *head = newNode;
}

void insertEnd(Node **head, int newVal)
{
    Node *newNode = new Node();
    newNode->val = newVal;
    newNode->next = NULL;

    if(*head==NULL)
    {
        *head = newNode;
        return;
    }

    Node *last = *head;
    while(last->next!=NULL)
    {
        last = last->next;
    }

    last->next = newNode;
}

void insertAfter(Node *node, int newVal)
{
    if(node == NULL)
    {
        cout << "Previous can't be NULL!!" << endl;
        return;
    }

    Node *newNode = new Node();
    newNode->val = newVal;
    newNode->next = node->next;
    node->next = newNode;
}