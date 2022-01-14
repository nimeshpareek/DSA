#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#include "Node.cpp"
Node *Takeinput()
{
    // not able to do this
    int data;
    cin >> data;
    int key;

    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
            // OR
            // tail = tail -> newnode;
        }
        cin >> data;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *insert_node(Node *head, int i, int data) // when we wants to return  head then only we use Node * otherwise we can use void
{

    Node *newnode = new Node(data);
    int count = 0;
    Node *temp = head;

    if (i == 0) // this condition is for when we wants to insert something at i = 0, for this we have to update head also;
    {
        newnode->next = head;
        head = newnode;
        return head;
    }

    while (temp != NULL && count < i - 2)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;
        temp->next = newnode;
        newnode->next = a;
    }
    return head;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        Node *head = Takeinput();
        int i;
        cin >> i;
        int data;
        cin >> data;
        head = insert_node(head, i, data);
        print(head);
    }

    return 0;
}