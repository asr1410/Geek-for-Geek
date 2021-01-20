#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *push(Node *head)
{
    int value;
    cout << "Enter value : ";
    cin >> value;
    Node *ptr = new Node();
    ptr->data = value;
    if (head == NULL)
    {
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        Node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = ptr;
        ptr->next = NULL;
    }
    return head;
}
void traversal(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
Node *head;
int main()
{
    int iter;
    cout << "Size of list = ";
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        head = push(head);
    }
    traversal(head);

    return 0;
}