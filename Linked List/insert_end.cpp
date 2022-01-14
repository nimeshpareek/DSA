#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printlist(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *insert_end1(int data, node *head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    cout << "Enter the node to be inserted: ";
    cin >> data;
    temp->next = new node(data);
    return head;
}
int main()
{
    int data;
    node *head;
    head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);

    printlist(head);
    node *new_print = insert_end1(data, head);

    printlist(new_print);

    return 0;
}