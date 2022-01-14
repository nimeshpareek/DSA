#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#include "Node.cpp"
Node *Takeinput()
{
    int data;
    cin >> data;
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
int lenghtcount(Node *head)
{
    Node *temp = head;
    int l = 0;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
Node *mid_element(Node *head)
{
    int length = lenghtcount(head);
    int mid = (length - 1) / 2;
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (count == mid)
        {
            return temp;
        }
        temp = temp -> next;
        count++;
    }
}

int main()
{
    Node *head = Takeinput();
    cout << "Your input LL is: ";
    print(head);
    cout << endl;
    Node *mid_ele = mid_element(head);
    cout << "Your mid element is: ";
    cout << mid_ele->data;

    return 0;
}