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
node *insert_position(node* head, int data,int position)
{
    node* temp = head;
    int count = 1;
    node* prevnode;
    while (count < position)
    {
        prevnode = temp;
        temp =  temp -> next;
        count++;
    }
    cout << "Enter the node to be inserted: " <<  endl;
    cin >> data;
    node *newnode = new node(data);
    newnode -> next = temp;
    prevnode -> next = newnode;
    return head;
}
int main()
{
    int data;
    node *head;
    int position;
    head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    
    printlist(head);
    cout << "Enter the position where you wanna to insert the node: ";
    cin >> position;
    node* newhead = insert_position(head,data,position);
    printlist(newhead);
    

    return 0;
}