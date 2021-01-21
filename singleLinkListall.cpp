#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

//Linked List Insertion
Node *push(Node *head)
{
    int value;
    cout << "Enter value : ";
    cin >> value;
    Node *current = new Node();
    current->data = value;
    if (head == NULL)
    {
        current->next = NULL;
        head = current;
    }
    else
    {
        Node *next = head;
        while (next->next != NULL)
        {
            next = next->next;
        }
        next->next = current;
        current->next = NULL;
    }
    return head;
}

//print a Linked list
void traversal(Node *head)
{
    if (head == NULL)
    {
        cout << "empty" << endl;
    }
    else
    {
        while (head != NULL)
        {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
}

//Linked List Deletion (Deleting a given key)
void deleteKey(Node *head)
{
    int value;
    cout << "Value to delete = ";
    cin >> value;
    Node *current, *next;
    current = head;
    next = head->next;
    if (current->data == value)
    {
        head->data = next->data;
        head->next = next->next;
    }
    else
    {
        while (next->data != value)
        {
            current = current->next;
            next = next->next;
        }
        current->next = next->next;
    }

    delete next;
    delete current;
    cout << endl;
}

//Linked List Deletion (Deleting a key at given index)
void deleteIndex(Node *head)
{
    int index;
    cout << "Enter the position = ";
    cin >> index;
    Node *current, *next;
    current = head;
    next = head->next;
    if (index == 1)
    {
        head->data = next->data;
        head->next = next->next;
    }
    else
    {
        while ((index - 1) > 1) //if -1 is not done it will take index from 0
        {
            current = current->next;
            next = next->next;
            index--;
        }
    }

    current->next = next->next;
    delete current;
    delete next;
    cout << endl;
}

//Write a function to delete a Linked List
Node *deleteList(Node *head)
{
    Node *current;
    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
    cout << "DELETED" << endl;
    return head;
}

//Find Length of a Linked List (Iterative and Recursive)
void length(Node *head)
{
    int length = 0;
    if (head == NULL)
    {
        length = 0;
    }
    else
    {
        while (head != NULL)
        {

            head = head->next;
            length = length + 1;
        }
    }
    cout << "Length of linked list = " << length << endl;
}

int main()
{
    Node *head = NULL;
    int iter;
    cout << "Size of list = ";
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        head = push(head);
    }
    traversal(head);

    deleteKey(head);

    traversal(head);

    deleteIndex(head);

    traversal(head);

    length(head);

    head = deleteList(head);

    traversal(head);

    return 0;
}