#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#include "Node.cpp"
Node *take_input()
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
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    
}
void searched_element(Node *head, int n) // this function will not return -1 to do this use Node *search...., i forget to use that
{
    Node *temp = head;   
    int count =1;
    while (temp != NULL)
    {
        
        if (temp -> data == n)
        {
            cout << count;
            break;
        }
        temp = temp -> next;
        count ++;
        
    }
    
}
int main()
{
    Node *head = take_input();
    print(head);
    int n;
    cin >> n;
    searched_element(head,n);

    return 0;
}