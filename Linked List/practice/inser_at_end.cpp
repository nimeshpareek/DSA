#include <iostream>
#include <unordered_map>
#include <unordered_set>
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

Node *insert_at_end(Node *head, int data)
{
    Node *newNode = new Node(data);
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    temp = newNode;
    return head;
}

Node *takeinput(Node *head)
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}
void printlist(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    int x;
    cin >> x;
    Node *head = takeinput(head);
    printlist(head);

    Node *newtail = insert_at_end(head, x);
    printlist(newtail);

    return 0;
}
