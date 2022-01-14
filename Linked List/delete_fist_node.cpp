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
node *delete_first(node* head)
{
    head = head -> next;
    return head;
}
void printlist(node* head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp ->data <<  " "; 
        temp = temp -> next;
    }
    cout <<  endl;
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
    node *new_list = delete_first(head);
    printlist(new_list);
    return 0;
}